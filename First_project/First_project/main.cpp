//1. �������� �������.

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int a, b, c;
	cout << "������� 3 �����" << endl;
	cin >> a >> b >> c;
	cout << "�����: " << a + b + c << endl;
	cout << "������������: " << a * b * c << endl;
	cout << "������� �������������� ��� ���������� �����: " << (a + b + c) / 3 << endl;
	cout << "������� �������������� � ����������� �����: " << (double)(a + b + c) / 3 << endl;
}