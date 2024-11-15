// Employee.h, the specification for the class Employee

// Ben Hertzler
// CSC 222
// Factory Workers Project

#pragma once

#include <string>
#include <iostream>
using namespace std;

class Employee
{
public:
	void setName(string n) { name = n; }
	// Function to set the name of the employee.
	// Precondition: name = n; default value "NAME"

	void setID(string id) { number = id; }
	// Function to set the employee number.
	// Precondition: number = id; default value "EMPLOYEE NUMBER"

	void setHireDate(string date) { hire_date = date; }
	// Function to set the date the employee was hired.
	// Postcondition: hire_date = date
	string getName() const { return name; }
	// Function to return the name of the employee as a string.
	// Postcondition: returns the value of name

	string getID() const { return number; }
	// Function to return the employee number as a string.
	// Postcondition: returns the value of number

	string getHireDate() const { return hire_date; }
	// Function to return the date the employee was hired as a string.
	// Postcondition: returns date_m, date_d, and date_y with format "dd/mm/yyyy"

	void print();
	// Function to output employee data to the console.

	Employee(string n = "NAME", string id = "EMPLOYEE NUMBER", string date = "MM/DD/YYYY")
		: name(n), number(id), hire_date(date) {}
	// Constructor with parameters initialized to default values.
	// Postcondition: name = n; number = id; date_m = mm; date_d = dd; date_y = yyyy

private:
	string name;
	string number;
	string hire_date;
};

