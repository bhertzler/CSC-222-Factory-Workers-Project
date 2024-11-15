// ProductionWorker.cpp, the implementation file for class ProductionWorker

// Ben Hertzler
// CSC 222
// Factory Workers Project

#include "ProductionWorker.h"
#include <string>
#include <iostream>
using namespace std;

/*
string ProductionWorker::getShift()
{
	if (shift == 1)
		return FIRST_SHIFT;
	else if (shift == 2)
		return SECOND_SHIFT;
	else
	{
		return OTHER_SHIFT;
	}
}
*/

void ProductionWorker::print()
{
	Employee::print();
	cout << "Shift: " << getShift() << endl;
	
	cout.precision(2);
	cout << fixed << "Hourly Pay Rate: $" << getHourlyRate() << endl;
}

ProductionWorker::ProductionWorker(string n = "NAME", string id = "EMPLOYEE NUMBER", string date = "MM/DD/YYYY", int t = 0, double p = 0.00)
{
	setName(n);
	setID(id);
	setHireDate(date);
	setShift(t);
	setHourlyRate(p);
}
