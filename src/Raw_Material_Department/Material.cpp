#include <iostream>
#include <string>
#include <iomanip>

#include "Material.hpp"

using namespace std;

// Default Constructor
Material::Material(){

}

// Overloaded Constructor
Material::Material(int materialID, string materialType, string materialQulaity, float cost, int suppliedQuantity, int safetystock, int availablestock, int orderdstock, int stockDuration){
	this->materialID = materialID;
	this->materialType = materialType;
	this->materialQulaity = materialQulaity;
	this->cost = cost;
	this->suppliedQuantity = suppliedQuantity;
	this->safetystock = safetystock;
	this->availableStock = availableStock;
	this->orderdStock = orderdStock;
	this->stockDuration = stockDuration;
}

// Destructor
Material::~Material(){
	cout << "[+] Material id:" << materialID << " " << materialType << " Removed Successfully!" << endl << endl;
}

void Material::calcFullstock(){
  float Fullstock = availableStock+safetystock;
  cout << "[*] Fullstock: " <<  Fullstock << " Ton" <<endl;  
}
void Material::calcEndstock(){
  float Endstock = (availableStock+safetystock)-suppliedQuantity;
  cout << "[*] Balance raw material stock: " <<  Endstock << "Ton" << endl << endl;
}
void Material::displayProdDetails(){
	int max_width = 33;

	cout << setw(max_width) << "Material: " <<  materialType << endl;
	cout << setw(max_width) << "MaterialQulaity: " <<  materialQulaity << endl;
	cout << setw(max_width) << "Cost: " <<  cost<< "Million"<< endl;
	cout << setw(max_width) << "SuppliedQuantity: " <<  suppliedQuantity<< endl;
	cout << setw(max_width) << "Availablestock quantity: " <<  availableStock <<"Ton"<< endl;
	cout << setw(max_width) << "Safety Stock: " <<  safetystock <<"Ton"<< endl;
	cout << setw(max_width) << "Availablestock till: " <<  stockDuration <<" months"<< endl;
	cout << endl;

	calcFullstock();
	calcEndstock();
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
int Material::getSafetystock(){
	return safetystock;
}
int Material::getAvailablestock(){
	return availableStock;
}
int Material::getOrderdstock(){
	return orderdStock;
}
int Material::getStockDuration(){
	return stockDuration;
}

// Setters
void Material::setMaterialType(string MaterialType) {
	this->materialType = MaterialType;
}
void Material::setMaterialQulaity(string MaterialQulaity){
	this->materialQulaity = MaterialQulaity;
}
void Material::setCost(float cost){
	this->cost = cost;
}
void Material::setSuppliedQuantity(int SuppliedQuantity){
	this->suppliedQuantity = SuppliedQuantity;
}
void Material::setSafetystock(int Safetystock){
	this->safetystock = Safetystock;
}
void Material::setAvailablestock(int Availablestock){
	this->availableStock = Availablestock;
}
void Material::setOrderdstock(int Orderdstock){
	this->orderdStock = Orderdstock;
}
void Material::setStockDuration(int stockDuration){
	this->stockDuration = stockDuration;
}