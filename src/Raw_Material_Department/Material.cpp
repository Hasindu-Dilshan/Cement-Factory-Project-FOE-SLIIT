#include <iostream>
#include <string>
#include <iomanip>

#include "Material.hpp"

using namespace std;

// Default Constructor
Material::Material(){

}

// Overloaded Constructor
Material::Material(int materialID, string materialType, string materialQulaity, float cost, int suppliedQuantity, int safetyStock, int availablestock, int orderedStock, int stockDuration){
	this->materialID = materialID;
	this->materialType = materialType;
	this->materialQulaity = materialQulaity;
	this->cost = cost;
	this->suppliedQuantity = suppliedQuantity;
	this->safetyStock = safetyStock;
	this->availableStock = availableStock;
	this->orderedStock = orderedStock;
	this->stockDuration = stockDuration;
}

// Destructor
Material::~Material(){
	cout << "[+] Material id:" << materialID << " " << materialType << " Removed Successfully!" << endl << endl;
}

void Material::calcFullStock(){
  float fullStock = availableStock+safetyStock;

  cout << "[*] Fullstock: " <<  fullStock << " Ton" <<endl;  
}
void Material::calcEndStock(){
  float endStock = (availableStock+safetyStock)-suppliedQuantity;

  cout << "[*] Balance raw material stock: " <<  endStock << "Ton" << endl << endl;
}
void Material::displayProdDetails(){
	const int max_width = 35;

	cout << setw(max_width) << "Material: " <<  materialType << endl;
	cout << setw(max_width) << "MaterialQulaity: " <<  materialQulaity << endl;
	cout << setw(max_width) << "Cost: " <<  cost<< "Million"<< endl;
	cout << setw(max_width) << "SuppliedQuantity: " <<  suppliedQuantity<< endl;
	cout << setw(max_width) << "Availablestock quantity: " <<  availableStock <<"Ton"<< endl;
	cout << setw(max_width) << "Safety Stock: " <<  safetyStock <<"Ton"<< endl;
	cout << setw(max_width) << "Availablestock till: " <<  stockDuration <<" months"<< endl;
	cout << endl;

	calcFullStock();
	calcEndStock();
}

// Getters
string Material::getMaterialType(){
	return materialType;
}
string Material::getMaterialQulaity(){
	return materialQulaity;
}
float Material::getCost(){
	return cost;
}
int Material::getSuppliedQuantity(){
	return suppliedQuantity; 
}
int Material::getSafetyStock(){
	return safetyStock;
}
int Material::getAvailableStock(){
	return availableStock;
}
int Material::getOrderedStock(){
	return orderedStock;
}
int Material::getStockDuration(){
	return stockDuration;
}

// Setters
void Material::setMaterialType(string materialType) {
	this->materialType = materialType;
}
void Material::setMaterialQulaity(string materialQulaity){
	this->materialQulaity = materialQulaity;
}
void Material::setCost(float cost){
	this->cost = cost;
}
void Material::setSuppliedQuantity(int suppliedQuantity){
	this->suppliedQuantity = suppliedQuantity;
}
void Material::setSafetyStock(int safetyStock){
	this->safetyStock = safetyStock;
}
void Material::setAvailableStock(int availableStock){
	this->availableStock = availableStock;
}
void Material::setOrderedStock(int orderedStock){
	this->orderedStock = orderedStock;
}
void Material::setStockDuration(int stockDuration){
	this->stockDuration = stockDuration;
}