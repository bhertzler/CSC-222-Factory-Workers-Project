// Employee.h, the specification for the class Employee

// Ben Hertzler
// CSC 222
// Factory Workers Project

#pragma once

#include "ProductionWorker.h"
#include <string>
#include <iostream>

class TeamLeader : public ProductionWorker
{
public:
	void setBonus(double b) { bonus = b; }
	void setRequiredTraining(int hrs) { req_training = hrs; }
	void setAttendedTraining(int hrs) { atd_training = hrs; }
	double getBonus() { return bonus; }
	int getRequiredTraining() { return req_training; }
	int getAttendedTraining() { return atd_training; }
	void print();
	TeamLeader(string n = "NAME", string id = "EMPLOYEE NUMBER", string date = "MM/DD/YYYY", int t = 0, double p = 0, double b = 0, int hrs_r = 0, int hrs_a = 0)
		: ProductionWorker(n, id, date, t, p), bonus(b), req_training(hrs_r), atd_training(hrs_a) {}

private:
	double bonus;			// Variable to store the monthly bonus.
	int req_training;		// Variable to store the number of required training hours.
	int atd_training;		// Variable to store the number of attended training hours.
};

