#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Product.hpp"

// Default Constructor
Product::Product()
{
}

// Overloaded Constructor
Product::Product(int productID, std::string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration)
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
	std::cout << "[+] Product id:" << productID << " " << productType << " Removed Successfully!" << std::endl
		 << std::endl;
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

	std::cout << std::setw(max_width) << "Product: " << productType << std::endl;
	std::cout << std::setw(max_width) << "Chemical Combination SO3: " << chemicalCombinationSo3 << "%" << std::endl;
	std::cout << std::setw(max_width) << "Chemical Combination Chloride: " << chemicalCombinationChloride << "%" << std::endl;
	std::cout << std::setw(max_width) << "Stock Availability: " << stockDuration << " months" << std::endl;
	std::cout << std::endl;

	std::cout << "[*] Profit: " << profit << std::endl;
	std::cout << "[*] No. of products produced than the demand: " << demand << std::endl
		 << std::endl;
}

// Getters
std::string Product::getProductType()
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
void Product::setProductType(std::string productType)
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

const std::string Product::toString() const
{
	std::ostringstream buffer;

	buffer << std::fixed << std::showpoint << std::setprecision(2)
		   << "productID: " << productID << std::endl
		   << "productType: " << productType << std::endl
		   << "cost: " << cost << std::endl
		   << "price: " << price << std::endl
		   << "chemicalCombinationSo3: " << chemicalCombinationSo3 << std::endl
		   << "chemicalCombinationChloride: " << chemicalCombinationChloride << std::endl
		   << "prodQuantity: " << prodQuantity << std::endl
		   << "reqProdQuantity: " << reqProdQuantity << std::endl
		   << "stockDuration: " << stockDuration << std::endl
		   << "profit: " << profit << std::endl
		   << "demand: " << demand << std::endl
		   << std::endl;

	return buffer.str();
}