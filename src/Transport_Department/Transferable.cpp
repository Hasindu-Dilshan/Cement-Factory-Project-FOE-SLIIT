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
}

// Destructor
Transferable::~Transferable()
{
	cout << "[+] Transferable id:" << transferableID << " " << transferableType << " Removed Successfully!" << endl
		 << endl;
}

void Transferable::calcFuelCost()
{
	float fuelCost = (fuelIssued * 430);
	cout << "[*] Fuel Cost: Rs." << fuelCost << endl;
}
void Transferable::calcOtherCost()
{
	float otherCosts = (kilometersDone * 30);
	cout << "[*] Other Cost: Rs." << otherCosts << endl;
}
void Transferable::calcTotalCost()
{
	float totalCost = (fuelIssued * 430) + (kilometersDone * 30);
	cout << "[*] Total Cost: Rs." << totalCost << endl;
}
void Transferable::calcAvgFuelUsage()
{
	float averageFuelUsage = (fuelIssued) - (kilometersDone / averageFuelConsumption);
	cout << "[*] clearAverage fuel used (litres): " << averageFuelUsage << endl
		 << endl;
}
void Transferable::displayTransferableDetails()
{
	const int max_width = 35;

	cout << setw(max_width) << "Transferable Catergory : " << transferableType << endl;
	cout << setw(max_width) << "Average Fuel Consumption (Km/l) : " << averageFuelConsumption << endl;
	cout << setw(max_width) << "Amount of Fuels Issued (litres) : " << fuelIssued << endl;
	cout << endl;

	calcFuelCost();
	calcOtherCost();
	calcTotalCost();
	calcAvgFuelUsage();
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
		   << "otherCost: " << otherCost << endl
		   << "averageFuelConsumption: " << averageFuelConsumption << endl
		   << "kilometersDone: " << kilometersDone << endl
		   << "totalCost: " << totalCost << endl
		   << "averagefuelUsage: " << averagefuelUsage << endl
		   << endl;

	return buffer.str();
}