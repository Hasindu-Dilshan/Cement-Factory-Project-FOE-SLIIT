#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Transferable.hpp"

using namespace std;

// Default Constructor
Transferable::Transferable()
{
}

// Overloaded Constructor
Transferable::Transferable(int transferableID, string transferableType, float fuelIssued, float averageFuelConsumption, float kilometersDone)
{
	this->transferableID = transferableID;
	this->transferableType = transferableType;
	this->fuelIssued = fuelIssued;
	this->averageFuelConsumption = averageFuelConsumption;
	this->kilometersDone = kilometersDone;

	calcFuelCost();
	calcOtherCost();
	calcTotalCost();
	calcAvgFuelUsage();
}

// Destructor
Transferable::~Transferable()
{
	cout << "[+] Transferable id:" << transferableID << " " << transferableType << " Removed Successfully!" << endl
		 << endl;
}

void Transferable::calcFuelCost()
{
	this->fuelCost = (fuelIssued * 430);
}
void Transferable::calcOtherCost()
{
	this->otherCosts = (kilometersDone * 30);
}
void Transferable::calcTotalCost()
{
	this->totalCost = (fuelIssued * 430) + (kilometersDone * 30);
}
void Transferable::calcAvgFuelUsage()
{
	this->averageFuelUsage = (fuelIssued) - ((float)kilometersDone / averageFuelConsumption);
}
void Transferable::displayTransferableDetails()
{
	const int max_width = 35;

	cout << setw(max_width) << "Transferable Catergory : " << transferableType << endl;
	cout << setw(max_width) << "Average Fuel Consumption (Km/l) : " << averageFuelConsumption << endl;
	cout << setw(max_width) << "Amount of Fuels Issued (litres) : " << fuelIssued << endl;
	cout << endl;

	cout << "[*] Fuel Costs: " << totalCost << endl;
	cout << "[*] Other Costs: " << totalCost << endl;
	cout << "[*] Total Cost: " << totalCost << endl;
	cout << "[*] clearAverage fuel used (litres): " << averageFuelUsage << endl
		 << endl;

	// calcFuelCost();
	// calcOtherCost();
	// calcTotalCost();
	// calcAvgFuelUsage();
}

// Getters
string Transferable::getTransferableType()
{
	return transferableType;
}
float Transferable::getFuelIssued()
{
	return fuelIssued;
}
float Transferable::getFuelCost()
{
	return fuelCost;
}
float Transferable::getAverageFuelConsumption()
{
	return averageFuelConsumption;
}
float Transferable::getKilometersDone()
{
	return kilometersDone;
}

// Setters
void Transferable::setTransferableType(string transferableType)
{
	this->transferableType = transferableType;
}
void Transferable::setFuelIssued(float fuelIssued)
{
	this->fuelIssued = fuelIssued;
}
void Transferable::setFuelCost(float fuelCost)
{
	this->fuelCost = fuelCost;
}
void Transferable::setAverageFuelConsumption(float averageFuelConsumption)
{
	this->averageFuelConsumption = averageFuelConsumption;
}
void Transferable::setKilometersDone(float kilometersDone)
{
	this->kilometersDone = kilometersDone;
}

const string Transferable::toString() const
{
	ostringstream buffer;

	buffer << fixed << showpoint << setprecision(2)
		   << "transferableID: " << transferableID << endl
		   << "transferableType: " << transferableType << endl
		   << "fuelIssued: " << fuelIssued << endl
		   << "fuelCost: " << fuelCost << endl
		   << "otherCosts: " << otherCosts << endl
		   << "averageFuelConsumption: " << averageFuelConsumption << endl
		   << "kilometersDone: " << kilometersDone << endl
		   << "totalCost: " << totalCost << endl
		   << "averageFuelUsage: " << averageFuelUsage << endl
		   << endl;

	return buffer.str();
}