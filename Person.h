#pragma once
#include<iostream>
using namespace std;


class Person
{
	std::string name;
public:
	Person(string name) :name(name) {}
	void print()
	{
		cout << "Привет " << name << " !" << endl;
	}
	
};