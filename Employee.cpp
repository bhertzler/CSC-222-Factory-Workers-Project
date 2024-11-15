// Employee.cpp, the implementation file for class Employee

// Ben Hertzler
// CSC 222
// Factory Workers Project

#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;

void Employee::print()
{
	cout << "Name: " << getName() << endl;
	cout << "Employee Number: " << getID() << endl;
	cout << "Hire Date: " << getHireDate() << endl;
}
