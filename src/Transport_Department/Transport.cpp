#include <iostream>
#include <string>

#include "Transport.hpp"

using namespace std;

Transferable* transferableArray[maxMemberCount];

// Initialize transferable count
int Transport::transferableCount = 0;

// Destructor
Transport::~Transport(){
	// Super class destructor is sufficient
}


// Increment object count after each object creation
void Transport::countTransferables() {
	Transport::transferableCount++;
}

int Transport::getTransferableCount() { 
	return transferableCount; 
}


void Transport::addTransferable(string transferableType, float fuelIssued, float averageFuelConsumption, float kilometersDone) {

	if(transferableCount < maxMemberCount) {
		transferableArray[transferableCount] = new Transferable(transferableCount, transferableType, fuelIssued, averageFuelConsumption, kilometersDone);

		countTransferables();
	}
	else {
		cout << "[-] Department is already full!" << endl;
	}

}

void Transport::removeTransferable(int transferableID) {
	delete transferableArray[transferableID];
	transferableArray[transferableID] = nullptr;
}

void Transport::getTransferable(int transferableID) {
	if(transferableArray[transferableID] != nullptr){
		cout << "--------------------------------------------------------------------" << endl << endl;
		transferableArray[transferableID] -> displayTransferableDetails();
	}
	else {
		cout << "[-] Requested transferable is not available!" << endl << endl;
	}
}
