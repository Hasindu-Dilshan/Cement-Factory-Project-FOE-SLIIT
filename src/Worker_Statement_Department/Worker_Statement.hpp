#pragma once

#include <string>
#include "../common/Department.hpp"
#include "Worker.hpp"

class Worker_Statement : public Department{
private:
	Worker* workers;
	static int workerCount;

public:
	Worker_Statement() : Department("Worker Statement"){};
		 
	~Worker_Statement();

	void countWorker();

	void addWorker(string name, string worker, int wh, int fx, int dy, int ot, int hr );
	void removeWorker(int productID);

	void getWorker(int productID);

	static int getWorkerCount();
};
