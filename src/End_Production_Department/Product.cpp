#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Product.hpp"

using namespace std;

// Default Constructor
Product::Product()
{
}

// Overloaded Constructor
Product::Product(int productID, string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration)
{
	this->productID = productID;
	this->productType = productType;
	this->cost = cost;
	this->price = price;
	this->chemicalCombinationSo3 = chemicalCombinationSo3;
	this->chemicalCombinationChloride = chemicalCombinationChloride;
	this->prodQuantity = prodQuantity;
	this->reqProdQuantity = reqProdQuantity;
	this->stockDuration = stockDuration;

	calcProfit();
	calcDemand();
}

// Destructor
Product::~Product()
{
	cout << "[+] Product id:" << productID << " " << productType << " Removed Successfully!" << endl
		 << endl;
}

// Callculate Profit
void Product::calcProfit()
{
	this->profit = prodQuantity * (price - cost);
}

// Calculate Demand
void Product::calcDemand()
{
	this->demand = prodQuantity - reqProdQuantity;
}

// Display Product Details
void Product::displayProdDetails()
{
	const int max_width = 35;

	cout << setw(max_width) << "Product: " << productType << endl;
	cout << setw(max_width) << "Chemical Combination SO3: " << chemicalCombinationSo3 << "%" << endl;
	cout << setw(max_width) << "Chemical Combination Chloride: " << chemicalCombinationChloride << "%" << endl;
	cout << setw(max_width) << "Stock Availability: " << stockDuration << " months" << endl;

	cout << setw(max_width) << "[*] Profit: Rs. " << profit << endl;
	cout << setw(max_width) << "[*] No. of products produced than the demand: " << demand << endl
		 << endl;
}

// Getters
string Product::getProductType()
{
	return productType;
}
float Product::getCost()
{
	return cost;
}
float Product::getPrice()
{
	return price;
}
float Product::getChemicalCombinationSo3()
{
	return chemicalCombinationSo3;
}
float Product::getChemicalCombinationChloride()
{
	return chemicalCombinationChloride;
}
int Product::getProdQuantity()
{
	return prodQuantity;
}
int Product::getReqProdQuantity()
{
	return reqProdQuantity;
}
int Product::getStockDuration()
{
	return stockDuration;
}
float Product::getProfit()
{
	return profit;
}
int Product::getDemand()
{
	return demand;
}

// Setters
void Product::setProductType(string productType)
{
	this->productType = productType;
}
void Product::setCost(float cost)
{
	this->cost = cost;
}
void Product::setPrice(float price)
{
	this->price = price;
}
void Product::setChemicalCombinationSo3(float chemicalCombinationSo3)
{
	this->chemicalCombinationSo3 = chemicalCombinationSo3;
}
void Product::setChemicalCombinationChloride(float chemicalCombinationChloride)
{
	this->chemicalCombinationChloride = chemicalCombinationChloride;
}
void Product::setProdQuantity(int prodQuantity)
{
	this->prodQuantity = prodQuantity;
}
void Product::setReqProdQuantity(int reqProdQuantity)
{
	this->reqProdQuantity = reqProdQuantity;
}
void Product::setStockDuration(int stockDuration)
{
	this->stockDuration = stockDuration;
}

const string Product::toString() const
{
	ostringstream buffer;

	buffer << fixed << showpoint << setprecision(2)
		   << "productID: " << productID << endl
		   << "productType: " << productType << endl
		   << "cost: " << cost << endl
		   << "price: " << price << endl
		   << "chemicalCombinationSo3: " << chemicalCombinationSo3 << endl
		   << "chemicalCombinationChloride: " << chemicalCombinationChloride << endl
		   << "prodQuantity: " << prodQuantity << endl
		   << "reqProdQuantity: " << reqProdQuantity << endl
		   << "stockDuration: " << stockDuration << endl
		   << "profit: " << profit << endl
		   << "demand: " << demand << endl
		   << endl;

	return buffer.str();
}