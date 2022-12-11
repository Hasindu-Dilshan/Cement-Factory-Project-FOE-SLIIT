#include <iostream>
#include<string>
#include "Transport.h"
using namespace std;


Transport::Transport(string type, float fuel_I, float AvgfuelCon, float KM){
  transportType = type;
  fuelIssued = fuel_I;
  averageFuelConsumption = AvgfuelCon;
  kilometersDone = KM;
}

Transport::~Transport(){
}


void Transport::calcFuelCost(){
  float fuelCost = (fuelIssued*430);
  cout<<"Fuel Cost: Rs."<<fuelCost<<endl;
}
void Transport::calcOtherCost(){
  float otherCost = (kilometersDone*30);
  cout<<"Other Cost: Rs."<<otherCost<<endl;
}
void Transport::calcTotalCost(){
  float totalCost = (fuelIssued*430)+(kilometersDone*30);
  cout<<"Total Cost: Rs."<<totalCost<<endl;
}
void Transport::calcAvgFuelUsage(){
  float averagefuelUsage = (fuelIssued)-(kilometersDone/averageFuelConsumption);
  cout<<"Average fuel used (litres): "<<averagefuelUsage<<endl<<endl;
}
void Transport::displayTransportDetails(){
  cout<<"Transport Catergory : "<< transportType<<endl;
  cout<<"Average Fuel Consumption (Km/l) : "<< averageFuelConsumption<<endl;
  cout<<"Amount of Fuels Issued (litres) : "<<fuelIssued <<endl;
 
  calcFuelCost();
  calcOtherCost();
  calcTotalCost(); 
  calcAvgFuelUsage();
}

 

//Getters
string Transport::getTransportType(){
  return transportType;
}
float Transport::getFuelIssued(){
  return fuelIssued;
}
float Transport::getFuelCost(){
  return fuelCost;
}
float Transport::getAverageFuelConsumption(){
  return averageFuelConsumption;
}
float Transport::getKilometersDone(){
  return kilometersDone;
}


//Setters
void Transport::setTransportType(string transportType){
  this ->transportType = transportType;
}
void Transport::setFuelIssued(float fuelIssued){
  this ->fuelIssued = fuelIssued;
}
void Transport::setFuelCost(float fuelCost){
this ->fuelCost = fuelCost;
}
void Transport::setAverageFuelConsumption(float averageFuelConsumption){
  this ->averageFuelConsumption = averageFuelConsumption;
}
void Transport::setKilometersDone(float kilometersDone){
this -> kilometersDone = kilometersDone;
}



