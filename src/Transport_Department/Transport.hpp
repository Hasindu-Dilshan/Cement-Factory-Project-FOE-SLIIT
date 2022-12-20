#pragma once

#include <string>

#include "../common/Department.hpp"
#include "Transferable.hpp"

class Transport : public Department{
private:
	Transferable* transferables;
	static int transferableCount;

public:
	Transport() : Department("Transport") {};
		 
	~Transport();

	void countTransferables();
	static int getTransferableCount();

	// Manipulate Transferables
	void addTransferable(string transferableType, float fuelIssued, float averageFuelConsumption, float kilometersDone);
	void removeTransferable(int transferableID);
	void getTransferable(int transferableID);

	const string toString();
	const string toString(int transferableID) const;
};
