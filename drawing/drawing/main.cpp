#include <GLFW/glfw3.h>
#include <cstring>
#include <stdlib.h>		  // srand, rand
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "math.h"
#include<time.h>
#include"Background.h"
#include<iostream>
#include"Background.h"
#include"Figure.h"
int main(void)
{
	Background * field = new Background(2000, 600);

	Icon_t1 _icon1(100, 100, 100, 100, 1, 0, 0);
	Icon_t1 _icon11(100, 300, 100, 100, 1, 0, 0);
	Icon_t2 _icon2(250, 100, 100, 100, 1, 0, 0);
	Icon_t2 _icon22(250, 300, 100, 100, 1, 0, 0);
	Icon_t3 _icon3(400, 100, 100, 100, 1, 0, 0);
	Icon_t3 _icon33(400, 300, 100, 100, 1, 0, 0);
	Icon_t4 _icon4(550, 100, 100, 100, 1, 0, 0);
	Icon_t4 _icon44(550, 300, 100, 100, 1, 0, 0);
	Icon_t5 _icon5(700, 100, 100, 100, 1, 0, 0);
	Icon_t5 _icon55(700, 300, 100, 100, 1, 0, 0);
	Icon_t6 _icon6(850, 100, 100, 100, 1, 0, 0);
	Icon_t6 _icon66(850, 300, 100, 100, 1, 0, 0);
	Icon_t7 _icon7(1000, 100, 100, 100, 1, 0, 0);
	Icon_t7 _icon77(1000, 300, 100, 100, 1, 0, 0);
	Icon_t8 _icon8(1150, 100, 100, 100, 1, 0, 0);
	Icon_t8 _icon88(1150, 300, 100, 100, 1, 0, 0);
	Icon_t9 _icon9(1300, 100, 100, 100, 1, 0, 0);
	Icon_t9 _icon99(1300, 300, 100, 100, 1, 0, 0);
	Icon_t10 _icon10(1450, 100, 100, 100, 1, 0, 0);
	Icon_t10 _icon100(1450, 300, 100, 100, 1, 0, 0);

	field->call(_icon1);
	field->call(_icon11);
	field->call(_icon2);
	field->call(_icon22);
	field->call(_icon3);
	field->call(_icon33);
	field->call(_icon4);
	field->call(_icon44);
	field->call(_icon5);
	field->call(_icon55);
	field->call(_icon6);
	field->call(_icon66);
	field->call(_icon7);
	field->call(_icon77);
	field->call(_icon8);
	field->call(_icon88);
	field->call(_icon9);
	field->call(_icon99);
	field->call(_icon10);
	field->call(_icon100);

	if (!field->start())
	{
		std::cout << "init error! " << std::endl;
		exit(1);
	}

	while (field->impl());

	if (!field->end())
	{
		std::cout << "destroy erroy! " << std::endl;
	}
	delete field;
	return 0;
}