//6. Константы

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	//const int COUNT_DAYS_IN_WEEK = 7;
	//cout << COUNT_DAYS_IN_WEEK << endl;
	////COUNT_DAYS_IN_WEEK = 5; // Ошибка

	const char NEW_LINE = '\n';
	cout << 1 << NEW_LINE << 2 << endl;

	const char TAB = '\t';
	cout << 3 << TAB << 4 << endl;
}