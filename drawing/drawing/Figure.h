#pragma once
#pragma once
#include"Background.h"
class Background;

class Figure
{
private:
	float R, G, B;
protected:
	int x, y, width, height;
public:
	Figure(
		const int& x, const int& y,
		const int& width, const int & height,
		const float& r, const float& g, const float &b);
	virtual void draw(Background* background);
};

class Icon_t1 : public Figure
{
public:Icon_t1(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t2 : public Figure
{
public:Icon_t2(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t3 : public Figure
{
public:Icon_t3(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t4 : public Figure
{
public:Icon_t4(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t5 : public Figure
{
public:Icon_t5(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t6 : public Figure
{
public:Icon_t6(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t7 : public Figure
{
public:Icon_t7(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t8 : public Figure
{
public:Icon_t8(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t9 : public Figure
{
public:Icon_t9(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};

class Icon_t10 : public Figure
{
public:Icon_t10(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Background* background);
};
