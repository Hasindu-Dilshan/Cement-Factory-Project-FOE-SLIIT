#include <iostream>
#include <string>
#include "Transport.hpp"

using namespace std;

Transport* transferableArray[maxMemberCount];

// Initialize transferable count
int Transport::transferableCount = 0;

// Destructor
Transport::~Transport(){
	// cout << "[+] Department id:" << this->id << " name: " << this->depName << " was destroyed!" << endl; 
}

// Increment object count after each object creation
void Transport::countTransferables() {
	Transport::transferableCount++;
}

void Transport::addTransferable(string type, float fuel_I, float AvgfuelCon, float KM) {

	if(transferableCount < maxMemberCount) {
		transferableArray[transferableCount] = new Transferable(transferableCount, type, fuel_I,  AvgfuelCon, KM);

		countTransferables();
	}
	else {
		cout << "[-] Department is already full!" << endl;
	}

}

void Transport::removeTransferable(int transferableID){
	delete transferableArray[transferableID];
	transferableArray[transferableID] = nullptr;
}

void Transport::getTransferable(int transferableID) {
	if(transferableArray[transferableID] != nullptr){
		cout << "--------------------------------------------------------------------" << endl << endl;
		transferableArray[transferableID]->displayTransferableDetails();
	}
	else {
		cout << "[-] Requested transferable is not available!" << endl << endl;
	}
		
}
// Getters
int Transport::getTransferableCount() { 
	return transferableCount; 
}
