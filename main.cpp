#include <iostream>
#include "Person.h"
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);         
	SetConsoleOutputCP(1251);   

	std::string name;
	cout << "введите имя ";
	cin >> name;
	Person men(name);
	men.print();
	
	system("pause");
}
