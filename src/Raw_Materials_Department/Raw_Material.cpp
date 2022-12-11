#include <iostream>
#include<string>
#include "Raw_Material.h"
using namespace std;

int Raw_Material::objectCount = 0;

Raw_Material::Raw_Material(string mater,string qulit, float co, int quint, int safe, int avai, int order, int st_D){
  MaterialType=mater;
  MaterialQulaity=qulit;
	cost=co;
	SuppliedQuantity=quint;
	Safetystock=safe;
	Availablestock=avai;
  Orderdstock=order;
	StockDuration=st_D;
  countObject();
}

 Raw_Material::~Raw_Material(){ 
   
}

void Raw_Material::countObject(){ 
  objectCount++; 
} 
void Raw_Material::calcFullstock(){
  float Fullstock = Availablestock+Safetystock;
  cout << "Fullstock: " <<  Fullstock <<" Ton"<<endl<< endl;  
}
void Raw_Material::calcEndstock(){
  float Endstock = (Availablestock+Safetystock)-SuppliedQuantity;
  cout << "Balance raw material stock: " <<  Endstock << "Ton" << endl<< endl;  
  cout << "----------------------------------------------------" << endl<<endl;
}
void Raw_Material::displayProdDetails(){
  cout << "Material: " <<  MaterialType << endl;
  cout << "MaterialQulaity: " <<  MaterialQulaity << endl;
  cout << "Cost: " <<  cost<< "Million"<< endl;
  cout << "SuppliedQuantity: " <<  SuppliedQuantity<< endl;
  cout << "Availablestock quantity: " <<  Availablestock <<"Ton"<< endl;
  cout << "Safety Stock: " <<  Safetystock <<"Ton"<< endl;
  cout << "Availablestock till: " <<  StockDuration <<" months"<< endl;
  calcFullstock();
  calcEndstock();
}

// Getters
string Raw_Material::getMaterialType(){
	return MaterialType;
}
string Raw_Material::getMaterialQulaity(){
	return MaterialQulaity;
}
float Raw_Material::getCost(){
	return cost;
}
int Raw_Material::getSuppliedQuantity(){
	return SuppliedQuantity; 
}
int Raw_Material::getSafetystock(){
	return Safetystock;
}
int Raw_Material::getAvailablestock(){
	return Availablestock;
}
int Raw_Material::getOrderdstock(){
	return Orderdstock;
}
int Raw_Material::getStockDuration(){
	return StockDuration;
}
int Raw_Material::getObjectCount() { 
  return objectCount; 
}

// Setters
void Raw_Material::setMaterialType(string MaterialType) {
	this->MaterialType = MaterialType;
}
void Raw_Material::setMaterialQulaity(string MaterialQulaity){
	this->MaterialQulaity = MaterialQulaity;
}
void Raw_Material::setCost(float cost){
	this->cost = cost;
}
void Raw_Material::setSuppliedQuantity(int SuppliedQuantity){
	this->SuppliedQuantity = SuppliedQuantity;
}
void Raw_Material::setSafetystock(int Safetystock){
	this->Safetystock = Safetystock;
}
void Raw_Material::setAvailablestock(int Availablestock){
	this->Availablestock = Availablestock;
}
void Raw_Material::setOrderdstock(int Orderdstock){
	this->Orderdstock = Orderdstock;
}
void Raw_Material::setStockDuration(int stockDuration){
	this->StockDuration = stockDuration;
}