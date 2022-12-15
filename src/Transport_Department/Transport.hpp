#pragma once

#include <string>
#include "../common/Department.hpp"
#include "Transferable.hpp"

class Transport : public Department{
private:
	Transferable* transferables;
	static int transferableCount;

public:
	Transport() : Department("Transport"){};
		 
	~Transport();

	void countTransferables();

	void addTransferable(string type, float fuel_I, float AvgfuelCon, float KM);
	void removeTransferable(int transferableID);

	void getTransferable(int transferableID);

	static int getTransferableCount();
};
