#include <iostream>
using namespace std;

int main()
{
	cout << "텍스트를 입력하라 >>";

	char arr[50];
	cin.getline(arr, 50, ';');

	int count = 0;
	char c = 'a';

	for (int i = 0; i < 50; i++)
	{
		if (isalpha(arr[i]) == !0) break;
		if (arr[i] == '\0')break;

		if (arr[i] == c) count++;

	}
	if (count > 0) {
		cout << c << ":" << count << endl;

		count = 0;
	}
	return 0;
}