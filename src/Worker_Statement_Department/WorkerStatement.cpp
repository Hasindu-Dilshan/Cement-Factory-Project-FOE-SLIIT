#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "WorkerStatement.hpp"

using namespace std;

Worker *workerArray[maxMemberCount];

// Initialize product count
int WorkerStatement::workerCount = 0;

// Destructor
WorkerStatement::~WorkerStatement()
{
	// Super class destructor is sufficient
}

// Increment object count after each object creation
void WorkerStatement::countWorker()
{
	WorkerStatement::workerCount++;
}

int WorkerStatement::getWorkerCount()
{
	return workerCount;
}

void WorkerStatement::addWorker(std::string workerName, std::string workerType, int workingHoursInTheMonth, int fixWorkingHoursPerDay, 
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

void WorkerStatement::removeWorker(int workerID)
{
	delete workerArray[workerID];
	workerArray[workerID] = nullptr;
}

void WorkerStatement::getWorker(int workerID)
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

const std::string WorkerStatement::toString()
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
const std::string WorkerStatement::toString(int workerID) const
{
	return workerArray[workerID]->toString();
}