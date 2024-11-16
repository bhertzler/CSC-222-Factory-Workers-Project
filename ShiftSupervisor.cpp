// ShiftSupervisor.cpp, the implementation file for class ShiftSupervisor

// Ben Hertzler
// CSC 222
// Factory Workers Project

#include "ShiftSupervisor.h"
#include <string>
#include <iostream>

void ShiftSupervisor::print()
{
	Employee::print();
	cout.precision(2);
	cout << fixed;
	cout << "Annual Salary: $" << salary << endl;
	cout << "Annual Bonus: $" << bonus << endl;
}


