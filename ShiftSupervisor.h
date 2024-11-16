// ShiftSupervisor.h, the specification for the class ShiftSupervisor

// Ben Hertzler
// CSC 222
// Factory Workers Project

#pragma once

#include "Employee.h"
#include <string>
#include <iostream>

class ShiftSupervisor : public Employee
{
public:
	void setSalary(double s) { salary = s; }
	// Function to set the annual salary.
	// Postcondition: salary = s;

	void setBonus(double b) { bonus = b; }
	// Function to set the annual bonus.
	// Postcondition: bonus = b;

	double getSalary() { return salary; }
	// Function to return the annual salary.

	double getBonus() { return bonus; }
	// Function to return the annual bonus.

	void print();
	// Function to output employee data to the console.
	// Outputs in the format: Name; Employee Number; Hire Date; Annual Salary; Annual Bonus

	ShiftSupervisor(string n = "NAME", string id = "EMPLOYEE NUMBER", string date = "MM/DD/YYYY", double s = 0.00, double b = 0.00)
		: Employee(n, id, date), salary(s), bonus(b) {}
	// Constructor with parameters initialized to default values.
	// Postcondition: name = n; number = id; hire_date = date; salary = s; bonus = b

private:
	double salary;		// Variable to store the annual salary
	double bonus;		// Variable to store the annual bonus
};

