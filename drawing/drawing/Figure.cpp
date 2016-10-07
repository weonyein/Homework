#include "Figure.h"
#include"Background.h"
#include<iostream>
#include<math.h>

Figure::Figure(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b)
{
	this->x = x; this->y = y; this->width = width; this->height = height; this->R = r; this->G = g; this->B = b;
}

void Figure::draw(Background* background)
{
	int l = 0.5*width;
	if (background->CheckCircle(this->x, this->y, l) == true) R = 1, G = 0, B = 1;
	else R = 0, G = 0, B = 1;

	background->drawLine(x - 0.5*width, y - 0.5*height, x + 0.5*width, y - 0.5*height, R, G, B);
	background->drawLine(x - 0.5*width, y + 0.5*height, x + 0.5*width, y + 0.5*height, R, G, B);
	background->drawLine(x - 0.5*width, y - 0.5*height, x - 0.5*width, y + 0.5*height, R, G, B);
	background->drawLine(x + 0.5*width, y - 0.5*height, x + 0.5*width, y + 0.5*height, R, G, B);

	/*int x = this->width / 2;
	int y = 0;
	int err = 0;
	if (background->CheckCircle(this->x, this->y, x)) {
	R = 0.0f; G = 0.0f; B = 1.0f;
	}
	else R = 1.0f, G = 0.0f, B = 0.0f;
	while (x >= y)
	{
	background->drawPixel(this->x + x, this->y + y, this->R, this->G, this->B);
	background->drawPixel(this->x + y, this->y + x, this->R, this->G, this->B);
	background->drawPixel(this->x - y, this->y + x, this->R, this->G, this->B);
	background->drawPixel(this->x - x, this->y + y, this->R, this->G, this->B);
	background->drawPixel(this->x - x, this->y - y, this->R, this->G, this->B);
	background->drawPixel(this->x - y, this->y - x, this->R, this->G, this->B);
	background->drawPixel(this->x + y, this->y - x, this->R, this->G, this->B);
	background->drawPixel(this->x + x, this->y - y, this->R, this->G, this->B);
	y += 1;
	err += 1 + 2 * y;
	if (2 * (err - x) + 1 > 0)
	{
	x -= 1;
	err += 1 - 2 * x;
	}
	}*/
}

Icon_t1::Icon_t1(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) :Figure(x, y, width, height, r, g, b)
{}
Icon_t2::Icon_t2(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t3::Icon_t3(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t4::Icon_t4(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t5::Icon_t5(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t6::Icon_t6(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t7::Icon_t7(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t8::Icon_t8(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t9::Icon_t9(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}
Icon_t10::Icon_t10(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : Figure(x, y, width, height, r, g, b)
{}

void Icon_t1::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 30, y - 30, x + 30, y + 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 30, y - 31, x + 30, y + 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 30, y - 29, x + 30, y + 30, 1.0f, 0.0f, 0.0f);

}
void Icon_t2::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 30, y, x, y + 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 30, y, x, y - 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x, y + 30, x + 30, y, 1.0f, 0.0f, 0.0f);
	background->drawLine(x, y - 30, x + 30, y, 1.0f, 0.0f, 0.0f);
}
void Icon_t3::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 27, y - 27, x - 27, y + 27, 1.0f, 0.0f, 0.0f);
	background->drawLine(x + 27, y - 27, x + 27, y + 27, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 27, y - 27, x + 27, y - 27, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 27, y + 27, x + 27, y + 27, 1.0f, 0.0f, 0.0f);
}
void Icon_t4::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 30, y - 30, x + 30, y + 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 30, y + 30, x + 30, y - 30, 1.0f, 0.0f, 0.0f);
}
void Icon_t5::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 30, y + 15, x - 20, y + 25, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 20, y + 25, x - 10, y + 15, 1.0f, 0.0f, 0.0f);
	background->drawLine(x + 10, y + 15, x + 20, y + 25, 1.0f, 0.0f, 0.0f);
	background->drawLine(x + 20, y + 25, x + 30, y + 15, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 10, y - 30, x + 10, y - 30, 1.0f, 0.0f, 0.0f);
}
void Icon_t6::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 25, y, x + 25, y, 1.0f, 0.0f, 0.0f);
	background->drawLine(x + 15, y + 10, x + 25, y, 1.0f, 0.0f, 0.0f);
	background->drawLine(x + 15, y - 10, x + 25, y, 1.0f, 0.0f, 0.0f);

}
void Icon_t7::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 20, y - 20, x, y + 20, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 20, y - 21, x, y + 19, 1.0f, 0.0f, 0.0f);
	background->drawLine(x, y + 20, x + 20, y - 20, 1.0f, 0.0f, 0.0f);
	background->drawLine(x, y + 19, x + 20, y - 21, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 10, y, x + 10, y, 1.0f, 0.0f, 0.0f);
}
void Icon_t8::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x, y - 30, x, y + 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 30, y, x + 30, y, 1.0f, 0.0f, 0.0f);
}
void Icon_t9::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x - 30, y + 30, x + 30, y - 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 30, y - 30, x - 30, y + 30, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 30, y - 30, x + 30, y - 30, 1.0f, 0.0f, 0.0f);
}
void Icon_t10::draw(Background * background)
{
	Figure::draw(background);
	background->drawLine(x, y - 25, x, y + 25, 1.0f, 0.0f, 0.0f);
	background->drawLine(x - 10, y + 15, x, y + 25, 1.0f, 0.0f, 0.0f);
	background->drawLine(x, y + 25, x + 10, y + 15, 1.0f, 0.0f, 0.0f);
}