// test-client.cpp, this program contains the main() function.

// Ben Hertzler
// CSC 222
// Factory Workers Project

// Program Description: This program generates an employee report for a production worker.
// Required User Input: Name of the employee as string;
//						Employee number as string;
//						Date hired as string;
//						Shift number as an int between 1 or 2 (1=Day, 2=Night);
//						The hourly wage of the employee as double;
//						Yes/No response to add another employee (y=Yes, n=No)
// Program Output: A report including the name, employee number, hire date, shift time, and hourly pay rate for all production workers.
// Supplied Constants: The maximum number of reports that can be generated is 100. Shift names supplied by ProductionWorker.

#include "ProductionWorker.h"
#include <string>
#include <iostream>

// Macro Constants
#define MAX_EMPLOYEES 100

int main()
{
	ProductionWorker employees[MAX_EMPLOYEES];
	string employee_name;
	string id_number;
	string hire_date;
	int shift_number;
	double pay_rate;

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
		cout << "Enter Shift Number (1/2): ";
		cin >> shift_number;
		cout << "Enter Hourly Pay Rate: $";
		cin >> pay_rate;

		employees[i].setName(employee_name);
		employees[i].setID(id_number);
		employees[i].setHireDate(hire_date);
		employees[i].setShift(shift_number);
		employees[i].setHourlyRate(pay_rate);

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
	cout << "Production Worker: " << endl << endl;

	for (int i = 0; i < employee_count; i++)
	{
		employees[i].print();
		cout << endl;
	}
}