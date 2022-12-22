#pragma once

#include <string>
#include <iostream>

using namespace std;

class Transferable
{
private:
	int transferableID;
	string transferableType;
	float fuelIssued;
	float fuelCost;
	float otherCosts;
	float averageFuelConsumption;
	float kilometersDone;
	float totalCost;
	float averageFuelUsage;

public:
	Transferable();

	Transferable(int transferableID, string transferableType, float fuelIssued, float averageFuelConsumption, float kilometersDone);

	~Transferable();

	void calcFuelCost();
	void calcOtherCost();
	void calcTotalCost();
	void calcAvgFuelUsage();
	void displayTransferableDetails();

	// Getters
	string getTransferableType();
	float getFuelIssued();
	float getFuelCost();
	float getAverageFuelConsumption();
	float getKilometersDone();

	// Setters
	void setTransferableType(string transportType);
	void setFuelIssued(float fuelIssued);
	void setFuelCost(float fuelCost);
	void setAverageFuelConsumption(float averageFuelConsumption);
	void setKilometersDone(float kilometersDone);

	const string toString() const;
};
