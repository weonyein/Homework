#pragma once
#pragma once

#include<GLFW/glfw3.h>
#include<vector>
#include"Figure.h"
class Figure;

class Background
{
private:
	GLFWwindow* window;
	int width, height;
	float *pixels;
	std::vector<Figure*> figure;
	double pos_x, pos_y;

public:
	Background(const int& width, const int& height);
	bool start();
	bool end();
	bool impl();
	void call(Figure& figure);
	void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue);
	void drawLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue);
	bool CheckCircle(int x_c, int y_c, int length);
	int getPosX();
	int getPosY();
	~Background();
};