#include <iostream>
#include "Person.h"
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	std::string name;
	cout << "������� ��� ";
	cin >> name;
	Person men(name);
	men.print();
	
	system("pause");
}