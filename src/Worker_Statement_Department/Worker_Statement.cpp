#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Worker_Statement.hpp"

using namespace std;

Worker *workerArray[maxMemberCount];

// Initialize product count
int Worker_Statement::workerCount = 0;

// Destructor
Worker_Statement::~Worker_Statement()
{
	// Super class destructor is sufficient
}

// Increment object count after each object creation
void Worker_Statement::countWorker()
{
	Worker_Statement::workerCount++;
}

int Worker_Statement::getWorkerCount()
{
	return workerCount;
}

void Worker_Statement::addWorker(string workerName, string workerType, int workingHoursInTheMonth, int fixWorkingHoursPerDay, int paymentForADay, int overtimeHours, int overtimePaymentPerHour)
{

	if (workerCount < maxMemberCount)
	{
		workerArray[workerCount] = new Worker(workerCount, workerName, workerType, workingHoursInTheMonth, fixWorkingHoursPerDay, paymentForADay, overtimeHours, overtimePaymentPerHour);

		countWorker();
	}
	else
	{
		cout << "[-] Department is already full!" << endl;
	}
}

void Worker_Statement::removeWorker(int workerID)
{
	delete workerArray[workerID];
	workerArray[workerID] = nullptr;
}

void Worker_Statement::getWorker(int workerID)
{
	if (workerArray[workerID] != nullptr)
	{
		cout << "--------------------------------------------------------------------" << endl
			 << endl;

		workerArray[workerID]->displayworkerTypeDetails();
	}
	else
	{
		cout << "[-] Requested worker is not available!" << endl
			 << endl;
	}
}

const string Worker_Statement::toString()
{
	ostringstream all_buffer;

	for (int workerID = 0; workerID < workerCount; workerID++)
	{
		all_buffer << toString(workerID);
	}

	return all_buffer.str();
}

// const(1) : Make string immutable during return mechanism
// const(2) : Read-only access to class's data members
const string Worker_Statement::toString(int workerID) const
{
	return workerArray[workerID]->toString();
}