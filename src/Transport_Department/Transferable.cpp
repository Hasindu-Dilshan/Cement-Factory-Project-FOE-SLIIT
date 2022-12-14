#include <iostream>
#include <string>
#include <iomanip>

#include "Transferable.hpp"

using namespace std;

// Default Constructor
Transferable::Transferable(){

}

// Overloaded Constructor
Transferable::Transferable(int transferableID, string type, float fuelIssued, float averageFuelConsumption, float kilometersDone){
	this->transferableID = transferableID;
	this->transferableType = type;
	this->fuelIssued = fuelIssued;
	this->averageFuelConsumption = averageFuelConsumption;
	this->kilometersDone = kilometersDone;
}

// Destructor
Transferable::~Transferable(){
	cout << "[+] Transferable id:" << transferableID << " " << transferableType << " Removed Successfully!" << endl << endl;
}

void Transferable::calcFuelCost(){
  float fuelCost = (fuelIssued*430);
  cout<<"Fuel Cost: Rs."<<fuelCost<<endl;
}
void Transferable::calcOtherCost(){
  float otherCost = (kilometersDone*30);
  cout<<"Other Cost: Rs."<<otherCost<<endl;
}
void Transferable::calcTotalCost(){
  float totalCost = (fuelIssued*430)+(kilometersDone*30);
  cout<<"Total Cost: Rs."<<totalCost<<endl;
}
void Transferable::calcAvgFuelUsage(){
  float averagefuelUsage = (fuelIssued)-(kilometersDone/averageFuelConsumption);
  cout<<"Average fuel used (litres): "<<averagefuelUsage<<endl<<endl;
}
void Transferable::displayTransferableDetails(){
  cout<<"Transferable Catergory : "<< transferableType<<endl;
  cout<<"Average Fuel Consumption (Km/l) : "<< averageFuelConsumption<<endl;
  cout<<"Amount of Fuels Issued (litres) : "<<fuelIssued <<endl;
 
  calcFuelCost();
  calcOtherCost();
  calcTotalCost(); 
  calcAvgFuelUsage();
}

 

//Getters
string Transferable::getTransferableType(){
  return transferableType;
}
float Transferable::getFuelIssued(){
  return fuelIssued;
}
float Transferable::getFuelCost(){
  return fuelCost;
}
float Transferable::getAverageFuelConsumption(){
  return averageFuelConsumption;
}
float Transferable::getKilometersDone(){
  return kilometersDone;
}


//Setters
void Transferable::setTransferableType(string transferableType){
  this ->transferableType = transferableType;
}
void Transferable::setFuelIssued(float fuelIssued){
  this ->fuelIssued = fuelIssued;
}
void Transferable::setFuelCost(float fuelCost){
this ->fuelCost = fuelCost;
}
void Transferable::setAverageFuelConsumption(float averageFuelConsumption){
  this ->averageFuelConsumption = averageFuelConsumption;
}
void Transferable::setKilometersDone(float kilometersDone){
this -> kilometersDone = kilometersDone;
}