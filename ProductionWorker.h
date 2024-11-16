// ProductionWorker.h, the specification for the class Employee

// Ben Hertzler
// CSC 222
// Factory Workers Project

#pragma once

#include "Employee.h"
#include <string>
#include <iostream>
using namespace std;


// Macro Constants
#ifndef FIRST_SHIFT
#define FIRST_SHIFT "Day"
#define SECOND_SHIFT "Night"
#define OTHER_SHIFT "Undefined Shift"
#endif // !FIRST_SHIFT

class ProductionWorker : public Employee
{
public:
	void setShift(int t) { shift = t; }
	// Function to set the shift number.
	// Postcondition: shift = t; default value 0

	void setHourlyRate(double p) { wage = p; }
	// Function to set the hourly pay rate
	// Postcondition: wage = p; default value 0.00

	string getShift() { return shift == 1 ? FIRST_SHIFT : shift == 2 ? SECOND_SHIFT : OTHER_SHIFT; }
	// Function to return the shift.
	// Postcondition: returns string FIRST_SHIFT for shift = 1;
	//					returns string SECOND_SHIFT for shift = 2;
	//					returns string OTHER_SHIFT for all other values of shift

	double getHourlyRate() { return wage; }
	// Function to return the hourly pay rate.

	void print();
	// Function to output employee data to the console.
	// Outputs in the format: Name; Employee Number; Hire Date; Shift; Hourly Pay Rate

	ProductionWorker(string n = "NAME", string id = "EMPLOYEE NUMBER", string date = "MM/DD/YYYY", int t = 0, double p = 0.00)
		: Employee(n, id, date), shift(t), wage(p) {}
	// Constructor with parameters initialized to default values.
	// Postcondition: name = n; number = id; hire_date = date; shift = t; wage = p

private:
	int shift;			// Variable to store the shift number.
	double wage;		// Variable to store the hourly pay rate.
};

