#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Transferable.hpp"

// Default Constructor
Transferable::Transferable()
{
}

// Overloaded Constructor
Transferable::Transferable(int transferableID, std::string transferableType, float fuelIssued, float averageFuelConsumption, float kilometersDone)
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
	std::cout << "[+] Transferable id:" << transferableID << " " << transferableType << " Removed Successfully!" << std::endl
			  << std::endl;
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

	std::cout << std::setw(max_width) << "Transferable Catergory : " << transferableType << std::endl;
	std::cout << std::setw(max_width) << "Average Fuel Consumption (Km/l) : " << averageFuelConsumption << std::endl;
	std::cout << std::setw(max_width) << "Amount of Fuels Issued (litres) : " << fuelIssued << std::endl;
	std::cout << std::endl;

	std::cout << "[*] Fuel Costs: " << totalCost << std::endl;
	std::cout << "[*] Other Costs: " << totalCost << std::endl;
	std::cout << "[*] Total Cost: " << totalCost << std::endl;
	std::cout << "[*] clearAverage fuel used (litres): " << averageFuelUsage << std::endl
			  << std::endl;

	// calcFuelCost();
	// calcOtherCost();
	// calcTotalCost();
	// calcAvgFuelUsage();
}

// Getters
std::string Transferable::getTransferableType()
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
void Transferable::setTransferableType(std::string transferableType)
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

const std::string Transferable::toString() const
{
	std::ostringstream buffer;

	buffer << std::fixed << std::showpoint << std::setprecision(2)
		   << "transferableID: " << transferableID << std::endl
		   << "transferableType: " << transferableType << std::endl
		   << "fuelIssued: " << fuelIssued << std::endl
		   << "fuelCost: " << fuelCost << std::endl
		   << "otherCosts: " << otherCosts << std::endl
		   << "averageFuelConsumption: " << averageFuelConsumption << std::endl
		   << "kilometersDone: " << kilometersDone << std::endl
		   << "totalCost: " << totalCost << std::endl
		   << "averageFuelUsage: " << averageFuelUsage << std::endl
		   << std::endl;

	return buffer.str();
}