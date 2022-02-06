//7. ¬вод данных. cin

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int Var, Var2, Var3, Var4;

	cout << "¬ведите первое число: ";
	cin >> Var;

	cout << "¬ведите второе число: ";
	cin >> Var2;

	cout << "¬ведите два числа: ";

	cin >> Var3 >> Var4;

	cout << "„исло 1 = " << Var << endl 
		<< "„исло 2 = " << Var2 << endl 
		<< "„исло 3 = " << Var3 << endl 
		<< "„исло 4 = " << Var4 << endl;
}