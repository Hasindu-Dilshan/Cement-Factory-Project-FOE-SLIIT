#pragma once

#include <string>
#include <iostream>

class Transferable
{
private:
	int transferableID;
	std::string transferableType;
	float fuelIssued;
	float fuelCost;
	float otherCosts;
	float averageFuelConsumption;
	float kilometersDone;
	float totalCost;
	float averageFuelUsage;

public:
	Transferable();

	Transferable(int transferableID, std::string transferableType, float fuelIssued, float averageFuelConsumption, float kilometersDone);

	~Transferable();

	void calcFuelCost();
	void calcOtherCost();
	void calcTotalCost();
	void calcAvgFuelUsage();
	void displayTransferableDetails();

	// Getters
	std::string getTransferableType();
	float getFuelIssued();
	float getFuelCost();
	float getAverageFuelConsumption();
	float getKilometersDone();

	// Setters
	void setTransferableType(std::string transportType);
	void setFuelIssued(float fuelIssued);
	void setFuelCost(float fuelCost);
	void setAverageFuelConsumption(float averageFuelConsumption);
	void setKilometersDone(float kilometersDone);

	const std::string toString() const;
};
