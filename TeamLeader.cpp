// TeamLeader.cpp, the implementation file for class TeamLeader

// Ben Hertzler
// CSC 222
// Factory Workers Project

#include "TeamLeader.h"
#include <string>
#include <iostream>
using namespace std;

void TeamLeader::print()
{
	ProductionWorker::print();
	cout.precision(2);
	cout << fixed << "Monthly Bonus: $" << bonus << endl;
	cout << "Required Training Hours: " << req_training << endl;
	cout << "Attended Training Hours: " << atd_training << endl;
}
