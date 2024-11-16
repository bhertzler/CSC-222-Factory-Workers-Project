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
	void setBonus(double b) { bonus = b; }
	double getSalary() { return salary; }
	double getBonus() { return bonus; }
	void print();
	ShiftSupervisor(string n = "NAME", string id = "EMPLOYEE NUMBER", string date = "MM/DD/YYYY", double s = 0.00, double b = 0.00)
		: Employee(n, id, date), salary(s), bonus(b) {}

private:
	double salary;
	double bonus;
};

