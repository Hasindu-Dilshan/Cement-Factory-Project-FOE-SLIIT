#pragma once

#include <string>
#include "../common/Department.hpp"
#include "Worker.hpp"

class Worker_Statement : public Department{
private:
	Worker* workers;
	static int workerCount;

public:
	Worker_Statement() : Department("Worker Statement") {};
		 
	~Worker_Statement();

	void countWorker();
	static int getWorkerCount();

	// Manipulate Workers
	void addWorker(string workerName, string workerType, int workingHoursInTheMonth, int fixWorkingHoursPerDay, int paymentForADay, int overtimeHours, int overtimePaymentPerHour);
	void removeWorker(int productID);
	void getWorker(int productID);
};
