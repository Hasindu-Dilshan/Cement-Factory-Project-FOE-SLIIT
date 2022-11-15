#include "EndProduction.h"
#include <iostream>
#include <string>

using namespace std;

// Initialize object count
int End_Production::objectCount = 0;

// Default Constructor
End_Production::End_Production(){

}

// Overloaded Constructor
End_Production::End_Production(string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration) {
	this->productType = productType;
	this->cost = cost;
	this->price = price;
	this->chemicalCombinationSo3 = chemicalCombinationSo3;
	this->chemicalCombinationChloride = chemicalCombinationChloride;
	this->prodQuantity = prodQuantity;
	this->reqProdQuantity = reqProdQuantity;
	this->stockDuration = stockDuration;

	countObject();
}

// Destructor
End_Production::~End_Production(){
	cout << "Department Object Destroyed Successfully!" << endl;
}

// Increment object count after each object creation
void End_Production::countObject() {
	objectCount++;
}

// Callculate Profit
void End_Production::calcProfit() {
	float profit = prodQuantity * (price - cost);

	cout << "Profit: Rs. " << profit << endl;
}

// Calculate Demand
void End_Production::calcDemand() {
	float demand = prodQuantity - reqProdQuantity;

	cout << "No. of products produced than the demand: " << demand << endl
	<< endl;
}

// Display Product Details
void End_Production::displayProdDetails(){
	cout << "Product: " <<  productType << endl;
	cout << "Chemical Combination SO3: " <<  chemicalCombinationSo3 <<"%"<< endl;
	cout << "Chemical Combination Chloride: " <<  chemicalCombinationChloride <<"%"<< endl;
	cout << "Stock Availability: " <<  stockDuration <<" months"<< endl;
	
	calcProfit();
	calcDemand();
}



// Getters
string End_Production::getProductType(){
	return productType;
}
float End_Production::getCost(){
	return cost;
}
float End_Production::getPrice(){
	return price;
}
float End_Production::getChemicalCombinationSo3(){
	return chemicalCombinationSo3; 
}
float End_Production::getChemicalCombinationChloride(){
	return chemicalCombinationChloride; 
}
int End_Production::getProdQuantity(){
	return prodQuantity;
}
int End_Production::getReqProdQuantity(){
	return reqProdQuantity;
}
int End_Production::getStockDuration(){
	return stockDuration;
}
int End_Production::getObjectCount() { 
	return objectCount; 
}

// Setters
void End_Production::setProductType(string productType) {
	this->productType = productType;
}
void End_Production::setCost(float cost){
	this->cost = cost;
}
void End_Production::setPrice(float price){
	this->price = price;
}
void End_Production::setChemicalCombinationSo3(float chemicalCombinationSo3){
	this->chemicalCombinationSo3 = chemicalCombinationSo3;
}
void End_Production::setChemicalCombinationChloride(float chemicalCombinationChloride){
	this->chemicalCombinationChloride = chemicalCombinationChloride;
}
void End_Production::setProdQuantity(int prodQuantity){
	this->prodQuantity = prodQuantity;
}
void End_Production::setReqProdQuantity(int reqProdQuantity){
	this->reqProdQuantity = reqProdQuantity;
}
void End_Production::setStockDuration(int stockDuration){
	this->stockDuration = stockDuration;
}
