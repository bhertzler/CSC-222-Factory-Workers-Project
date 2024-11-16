// ProductionWorker.cpp, the implementation file for class ProductionWorker

// Ben Hertzler
// CSC 222
// Factory Workers Project

#include "ProductionWorker.h"
#include <string>
#include <iostream>
using namespace std;


void ProductionWorker::print()
{
	Employee::print();
	cout << "Shift: " << getShift() << endl;
	
	cout.precision(2);
	cout << fixed << "Hourly Pay Rate: $" << getHourlyRate() << endl;
}