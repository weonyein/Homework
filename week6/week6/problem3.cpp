#include <iostream>
#include <string>
#include <vector>
#include <GLFW/glfw3.h>
#include <cstring>
#include <stdlib.h>
#include <thread>
#include <chrono>
#include "math.h"

double xpos, ypos;
GLFWwindow* window;

const int width = 750;
const int height = 480;
float* pixels = new float[width*height * 3];

void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}

void drawLine(const int & i0, const int & j0, const int & i1, const int & j1, const float & red, const float & green, const float & blue)
{
	if (i0 == i1)
	{
		for (int y = j0; y < j1; y++)
		{
			drawPixel(i0, y, red, green, blue);
		}
	}

	else for (int i = i0; i <= i1; i++)
	{
		const int j = (j1 - j0)*(i - i0) / (i1 - i0) + j0;

		drawPixel(i, j, red, green, blue);
	}
}
class MotherDraw
{
public:
	virtual void draw() = 0;

};

class Box
{
public:
	int i0 = 50, j0 = 50, i1 = 100, j1 = 100;
	void draw()
	{
		drawLine(i0, j0, i1, j0, 1,0,0);
		drawLine(i0, j1, i1, j1, 1, 0, 0);
		drawLine(i0, j0, i0, j1, 1, 0, 0);
		drawLine(i1, j0, i1, j1, 1, 0, 0);
	}
};

class Circle
{
public:
	int i0 = 200, j0 = 200, r = 50;
	void draw()
	{		
		int x = r, y = 0, err = 0;

		while (x >= y)
		{
			drawPixel(i0 + x, j0 + y, 1,0,0);
			drawPixel(i0 + y, j0 + x, 1, 0, 0);
			drawPixel(i0 - y, j0 + x, 1, 0, 0);
			drawPixel(i0 - x, j0 + y, 1, 0, 0);
			drawPixel(i0 - x, j0 - y, 1, 0, 0);
			drawPixel(i0 - y, j0 - x, 1, 0, 0);
			drawPixel(i0 + y, j0 - x, 1, 0, 0);
			drawPixel(i0 + x, j0 - y, 1, 0, 0);

			y += 1;
			err += 1 + 2 * y;
			if (2 * (err - x) + 1 > 0)
			{
				x -= 1;
				err += 1 - 2 * x;
			}
		}
	}
};

template<class T_HOW_TO_DRAW>
class Draw : public MotherDraw
{
public:
	void draw()
	{
		T_HOW_TO_DRAW draw_shape;
		draw_shape.draw();
	}
};

void drawOnPixelBuffer()
{
	//std::memset(pixels, 1.0f, sizeof(float)*width*height * 3); // doesn't work
	std::fill_n(pixels, width*height * 3, 1.0f);	// white background

													//for (int i = 0; i<width*height; i++) {
													//	pixels[i * 3 + 0] = 1.0f; // red 
													//	pixels[i * 3 + 1] = 1.0f; // green
													//	pixels[i * 3 + 2] = 1.0f; // blue
													//}

	const int i = rand() % width, j = rand() % height;
	//drawPixel(i, j, 0.0f, 0.0f, 0.0f);

}

int main()
{
	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(width, height, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	glClearColor(1, 1, 1, 1); // while background
							  /* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		glfwGetCursorPos(window, &xpos, &ypos);
		drawOnPixelBuffer();

		std::vector<MotherDraw*> obj_list;
		obj_list.push_back(new Draw<Circle>);
		obj_list.push_back(new Draw<Box>);

		for (auto itr : obj_list)
			itr->draw();

		glDrawPixels(width, height, GL_RGB, GL_FLOAT, pixels);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();

		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}

	glfwTerminate();

	delete[] pixels; // or you may reuse pixels array 

	return 0;
}