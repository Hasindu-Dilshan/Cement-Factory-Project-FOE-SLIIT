#include <iostream>
#include <string>
#include <iomanip>

#include "Product.hpp"

using namespace std;

// Default Constructor
Product::Product(){

}

// Overloaded Constructor
Product::Product(int productID, string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration){
	this->productID = productID;
	this->productType = productType;
	this->cost = cost;
	this->price = price;
	this->chemicalCombinationSo3 = chemicalCombinationSo3;
	this->chemicalCombinationChloride = chemicalCombinationChloride;
	this->prodQuantity = prodQuantity;
	this->reqProdQuantity = reqProdQuantity;
	this->stockDuration = stockDuration;
}

// Destructor
Product::~Product(){
	cout << "[+] Product id:" << productID << " " << productType << " Removed Successfully!" << endl << endl;
}

// Callculate Profit
void Product::calcProfit() {
	float profit = prodQuantity * (price - cost);

	cout << "[*] Profit: Rs. " << profit << endl;
}

// Calculate Demand
void Product::calcDemand() {
	float demand = prodQuantity - reqProdQuantity;

	cout << "[*] No. of products produced than the demand: " << demand << endl
	<< endl;
}

// Display Product Details
void Product::displayProdDetails(){
	int max_width = 33;

	// cout << endl;
	cout << setw(max_width) << "Product: " <<  productType << endl;
	cout << setw(max_width) << "Chemical Combination SO3: " <<  chemicalCombinationSo3 <<"%"<< endl;
	cout << setw(max_width) << "Chemical Combination Chloride: " <<  chemicalCombinationChloride <<"%"<< endl;
	cout << setw(max_width) << "Stock Availability: " <<  stockDuration <<" months"<< endl << endl;
	
	calcProfit();
	calcDemand();
}



// Getters
string Product::getProductType(){
	return productType;
}
float Product::getCost(){
	return cost;
}
float Product::getPrice(){
	return price;
}
float Product::getChemicalCombinationSo3(){
	return chemicalCombinationSo3; 
}
float Product::getChemicalCombinationChloride(){
	return chemicalCombinationChloride; 
}
int Product::getProdQuantity(){
	return prodQuantity;
}
int Product::getReqProdQuantity(){
	return reqProdQuantity;
}
int Product::getStockDuration(){
	return stockDuration;
}

// Setters
void Product::setProductType(string productType) {
	this->productType = productType;
}
void Product::setCost(float cost){
	this->cost = cost;
}
void Product::setPrice(float price){
	this->price = price;
}
void Product::setChemicalCombinationSo3(float chemicalCombinationSo3){
	this->chemicalCombinationSo3 = chemicalCombinationSo3;
}
void Product::setChemicalCombinationChloride(float chemicalCombinationChloride){
	this->chemicalCombinationChloride = chemicalCombinationChloride;
}
void Product::setProdQuantity(int prodQuantity){
	this->prodQuantity = prodQuantity;
}
void Product::setReqProdQuantity(int reqProdQuantity){
	this->reqProdQuantity = reqProdQuantity;
}
void Product::setStockDuration(int stockDuration){
	this->stockDuration = stockDuration;
}
