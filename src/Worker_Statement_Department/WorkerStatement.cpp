#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "WorkerStatement.hpp"

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

void Worker_Statement::addWorker(std::string workerName, std::string workerType, int workingHoursInTheMonth, int fixWorkingHoursPerDay, 
								int paymentForADay, int overtimeHours, int overtimePaymentPerHour)
{

	if (workerCount < maxMemberCount)
	{
		workerArray[workerCount] = new Worker(workerCount, workerName, workerType, workingHoursInTheMonth, fixWorkingHoursPerDay, 
												paymentForADay, overtimeHours, overtimePaymentPerHour);

		countWorker();
	}
	else
	{
		std::cout << "[-] Department is already full!" << std::endl;
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
		std::cout << "--------------------------------------------------------------------" << std::endl
			 << std::endl;

		workerArray[workerID]->displayworkerTypeDetails();
	}
	else
	{
		std::cout << "[-] Requested worker is not available!" << std::endl
			 << std::endl;
	}
}

const std::string Worker_Statement::toString()
{
	std::ostringstream all_buffer;

	for (int workerID = 0; workerID < workerCount; workerID++)
	{
		all_buffer << toString(workerID);
	}

	return all_buffer.str();
}

// const(1) : Make string immutable during return mechanism
// const(2) : Read-only access to class's data members
const std::string Worker_Statement::toString(int workerID) const
{
	return workerArray[workerID]->toString();
}