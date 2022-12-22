#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Transport.hpp"

using namespace std;

Transferable *transferableArray[maxMemberCount];

// Initialize transferable count
int Transport::transferableCount = 0;

// Destructor
Transport::~Transport()
{
	// Super class destructor is sufficient
}

// Increment object count after each object creation
void Transport::countTransferables()
{
	Transport::transferableCount++;
}

int Transport::getTransferableCount()
{
	return transferableCount;
}

void Transport::addTransferable(std::string transferableType, float fuelIssued, float averageFuelConsumption, float kilometersDone)
{

	if (transferableCount < maxMemberCount)
	{
		transferableArray[transferableCount] = new Transferable(transferableCount, transferableType, fuelIssued, averageFuelConsumption, kilometersDone);

		countTransferables();
	}
	else
	{
		std::cout << "[-] Department is already full!" << std::endl;
	}
}

void Transport::removeTransferable(int transferableID)
{
	delete transferableArray[transferableID];
	transferableArray[transferableID] = nullptr;
}

void Transport::getTransferable(int transferableID)
{
	if (transferableArray[transferableID] != nullptr)
	{
		std::cout << "--------------------------------------------------------------------" << std::endl
				  << std::endl;
		transferableArray[transferableID]->displayTransferableDetails();
	}
	else
	{
		std::cout << "[-] Requested transferable is not available!" << std::endl
				  << std::endl;
	}
}

const std::string Transport::toString()
{
	std::ostringstream all_buffer;

	for (int transferableID = 0; transferableID < transferableCount; transferableID++)
	{
		all_buffer << toString(transferableID);
	}

	return all_buffer.str();
}

// const(1) : Make string immutable during return mechanism
// const(2) : Read-only access to class's data members
const std::string Transport::toString(int transferableID) const
{
	return transferableArray[transferableID]->toString();
}