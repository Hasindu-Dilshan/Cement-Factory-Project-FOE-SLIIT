#pragma once

#include <string>
#include <iostream>

using namespace std;

class Transferable {
private:
	int transferableID;
	string transferableType;
	float fuelIssued;
	float fuelCost;
	float otherCost;
	float averageFuelConsumption;
	float kilometersDone;
	float totalCost;
	float averagefuelUsage;

public:
	Transferable();
	
	Transferable(int transferableID, string type, float fuel_I, float AvgfuelCon, float KM);
		 
	~Transferable();

	void calcFuelCost();
	void calcOtherCost();
	void calcTotalCost();
	void calcAvgFuelUsage();
	void displayTransferableDetails();

	void setcalcFuelCost(float fuel_C);
	void setcalcOtherCost(float other_C);
	void setcalcTotalCost(float total_C);
	void setcalcAvgFuelUsage(float avg_F_U);

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
};
