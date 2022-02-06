//10. Сокращённые арифметические формы

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a = 0;
	cout << a << endl;
	a = a + 2;
	cout << a << endl;
	a += 2;
	cout << a << endl;
	a -= 2;
	cout << a << endl;
	a *= 2;
	cout << a << endl;
	a /= 2;
	cout << a << endl;
}