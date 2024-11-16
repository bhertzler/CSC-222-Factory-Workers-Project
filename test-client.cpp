// test-client.cpp, this program contains the main() function.

// Ben Hertzler
// CSC 222
// Factory Workers Project

// Program Description: This program generates an employee report for a shift supervisor.
// Required User Input: Name of the employee as string;
//						Employee number as string;
//						Date hired as string;
//						Annual salary as double;
//						Annual bonus as double;
//						Yes/No response to add another employee (y=Yes, n=No)
// Program Output: A report including the name, employee number, hire date, annual salary, and annual bonus for all shift supervisors.
// Supplied Constants: The maximum number of reports that can be generated is 100.

#include "ShiftSupervisor.h"
#include <string>
#include <iostream>

// Macro Constants
#define MAX_EMPLOYEES 100

int main()
{
	ShiftSupervisor employees[MAX_EMPLOYEES];
	string employee_name;
	string id_number;
	string hire_date;
	double annual_salary;
	double annual_bonus;

	string response;
	char sentinel;
	int employee_count;

	int i = 0;
	while (i < MAX_EMPLOYEES)
	{
		cout << "Employee " << (i + 1) << ":" << endl;
		cout << "Enter Name: ";
		getline(cin, employee_name);
		cout << "Enter ID Number: ";
		getline(cin, id_number);
		cout << "Enter Hire Date: ";
		getline(cin, hire_date);
		cout << "Enter Annual Salary: $";
		cin >> annual_salary;
		cout << "Enter Annual Bonus: $";
		cin >> annual_bonus;

		employees[i].setName(employee_name);
		employees[i].setID(id_number);
		employees[i].setHireDate(hire_date);
		employees[i].setSalary(annual_salary);
		employees[i].setBonus(annual_bonus);

		cout << "Add new employee? (Y/N): ";
		cin >> response;
		cin.ignore(response.length(), '\n');
		cout << endl;

		sentinel = tolower(response[0]);
		if (sentinel == 'y')
			i++;
		else
			break;
	}

	employee_count = i + 1;
	cout << "Shift Supervisor: " << endl << endl;

	for (int i = 0; i < employee_count; i++)
	{
		employees[i].print();
		cout << endl;
	}
}