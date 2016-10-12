#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <class T_PRINT>
class Vector2D
{
public:
	T_PRINT x_, y_;

	Vector2D(const T_PRINT& x_input, const T_PRINT& y_input)
		:x_(x_input), y_(y_input)
	{}

	void print()
	{
		cout << x_ << " " << y_ << endl;
	}
};

int main()
{
	Vector2D<int> int_vector(1, 1);
	int_vector.print();

	Vector2D<string> str_vector("Hello", "World");
	str_vector.print();

	return 0;
}
