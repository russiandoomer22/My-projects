//7. ���� ������. cin

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int Var, Var2, Var3, Var4;

	cout << "������� ������ �����: ";
	cin >> Var;

	cout << "������� ������ �����: ";
	cin >> Var2;

	cout << "������� ��� �����: ";

	cin >> Var3 >> Var4;

	cout << "����� 1 = " << Var << endl 
		<< "����� 2 = " << Var2 << endl 
		<< "����� 3 = " << Var3 << endl 
		<< "����� 4 = " << Var4 << endl;
}