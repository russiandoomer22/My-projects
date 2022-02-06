//1. Домашнее задание.

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c;
	cout << "Введите 3 числа" << endl;
	cin >> a >> b >> c;
	cout << "Сумма: " << a + b + c << endl;
	cout << "Произведение: " << a * b * c << endl;
	cout << "Среднее арифметическое без приведения типов: " << (a + b + c) / 3 << endl;
	cout << "Среднее арифметическое с приведением типов: " << (double)(a + b + c) / 3 << endl;
}