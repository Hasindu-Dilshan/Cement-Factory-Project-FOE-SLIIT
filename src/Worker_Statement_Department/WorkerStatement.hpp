#pragma once

#include <string>

#include "../common/Department.hpp"
#include "Worker.hpp"

class WorkerStatement : public Department{
private:
	Worker* workers;
	static int workerCount;

public:
	WorkerStatement() : Department("Worker Statement") {};
		 
	~WorkerStatement();

	void countWorker();
	static int getWorkerCount();

	// Manipulate Workers
	void addWorker(std::string workerName, std::string workerType, int workingHoursInTheMonth, int fixWorkingHoursPerDay, 
					int paymentForADay, int overtimeHours, int overtimePaymentPerHour);
	void removeWorker(int productID);
	void getWorker(int productID);

	const std::string toString();
	const std::string toString(int productID) const;
};
