#include <iostream>
#include <string>
#include "Worker_Statement.hpp"

using namespace std;

Worker* workerArray[maxMemberCount];

// Initialize product count
int Worker_Statement::workerCount = 0;

// Destructor
Worker_Statement::~Worker_Statement(){
	// cout << "[+] Department id:" << this->id << " name: " << this->depName << " was destroyed!" << endl; 
}

// Increment object count after each object creation
void Worker_Statement::countWorker() {
	Worker_Statement::workerCount++;
}

void Worker_Statement::addWorker(string name, string worker, int wh, int fx, int dy, int ot, int hr) {

	if(workerCount < maxMemberCount) {
		workerArray[workerCount] = new Worker(workerCount, name, worker, wh, fx, dy, ot, hr);

		countWorker();
	}
	else {
		cout << "[-] Department is already full!" << endl;
	}

}

void Worker_Statement::removeWorker(int workerID){
	delete workerArray[workerID];
	workerArray[workerID] = nullptr;
}

void Worker_Statement::getWorker(int workerID) {
	if(workerArray[workerID] != nullptr){
		cout << "--------------------------------------------------------------------" << endl << endl;
		workerArray[workerID]->displayworkerTypeDetails();
	}
	else {
		cout << "[-] Requested product is not available!" << endl << endl;
	}
		
}
// Getters
int Worker_Statement::getWorkerCount() {
	return workerCount;
}
