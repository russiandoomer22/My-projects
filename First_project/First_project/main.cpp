//9. Инкремент, декремент. Префиксный, постфиксный

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	/*int a = 1;
	cout << a << endl;
	a = a + 1;
	cout << a << endl;
	a++;
	cout << a << endl;
	a = a + 5;
	cout << a << endl;
	a--;
	cout << a << endl;*/

	/*int a = 1;
	a++;
	cout << a << endl;
	++a;
	cout << a << endl;
	cout << ++a << endl;
	cout << a++ << endl;*/

	int a = 1, b;
	//b = ++a * a; // 4
	b = ++a * a++; // 4
	cout << a << endl;
	cout << b << endl;
}