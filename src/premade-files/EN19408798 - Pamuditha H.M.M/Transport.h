#ifndef class_4 
#define class_4
#include <string>
using namespace std;

class Transport {
private:
  string transportType;
  float fuelIssued;
  float fuelCost;
  float otherCost;
  float averageFuelConsumption;
  float kilometersDone;
  float totalCost;
  float averagefuelUsage;

public:
  Transport(){}

  Transport(string type, float fuel_I, float AvgfuelCon, float KM);

  ~Transport();
  
void calcFuelCost();
void calcOtherCost();
void calcTotalCost();
void calcAvgFuelUsage();
void displayTransportDetails();
void setcalcFuelCost(float fuel_C);
void setcalcOtherCost(float other_C);
void setcalcTotalCost(float total_C);
void setcalcAvgFuelUsage(float avg_F_U);

//Getters
string getTransportType();
float getFuelIssued();
float getFuelCost();
float getAverageFuelConsumption();
float getKilometersDone();

//Setters
void setTransportType(string transportType);
void setFuelIssued(float fuelIssued);
void setFuelCost(float fuelCost);
void setAverageFuelConsumption(float averageFuelConsumption);
void setKilometersDone(float kilometersDone);

};

#endif
