#include <iostream>
#include <string>
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
	cout << "Material id:" << materialID << " Removed Successfully!" << endl << endl;
}

void Material::calcFullstock(){
  float Fullstock = availableStock+safetystock;
  cout << "Fullstock: " <<  Fullstock <<" Ton"<<endl<< endl;  
}
void Material::calcEndstock(){
  float Endstock = (availableStock+safetystock)-suppliedQuantity;
  cout << "Balance raw material stock: " <<  Endstock << "Ton" << endl << endl;  
  cout << "----------------------------------------------------" << endl << endl;
}
void Material::displayProdDetails(){
    cout << "ID: " << materialID << endl;
    cout << "Material: " <<  materialType << endl;
    cout << "MaterialQulaity: " <<  materialQulaity << endl;
    cout << "Cost: " <<  cost<< "Million"<< endl;

    cout << "SuppliedQuantity: " <<  suppliedQuantity<< endl;
    cout << "Availablestock quantity: " <<  availableStock <<"Ton"<< endl;
    cout << "Safety Stock: " <<  safetystock <<"Ton"<< endl;
    cout << "Availablestock till: " <<  stockDuration <<" months"<< endl;
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