#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Material.hpp"

using namespace std;

// Default Constructor
Material::Material()
{
}

// Overloaded Constructor
Material::Material(int materialID, string materialType, string materialQulaity, long cost, int suppliedQuantity, 
					int safetyStock, int availableStock, int orderedStock, int stockDuration)
{
	this->materialID = materialID;
	this->materialType = materialType;
	this->materialQulaity = materialQulaity;
	this->cost = cost;
	this->suppliedQuantity = suppliedQuantity;
	this->safetyStock = safetyStock;
	this->availableStock = availableStock;
	this->orderedStock = orderedStock;
	this->stockDuration = stockDuration;

	calcFullStock();
	calcEndStock();
}

// Destructor
Material::~Material()
{
	cout << "[+] Material id:" << materialID << " " << materialType << " Removed Successfully!" << endl
		 << endl;
}

void Material::calcFullStock()
{
	this->fullStock = availableStock + safetyStock;
}
void Material::calcEndStock()
{
	this->endStock = fullStock - suppliedQuantity;
}
void Material::displayProdDetails()
{
	const int max_width = 35;

	cout << setw(max_width) << "Material: " << materialType << endl;
	cout << setw(max_width) << "MaterialQulaity: " << materialQulaity << endl;
	cout << setw(max_width) << "Cost: " << cost << " Million" << endl;
	cout << setw(max_width) << "SuppliedQuantity: " << suppliedQuantity << endl;
	cout << setw(max_width) << "Availablestock quantity: " << availableStock << "Ton" << endl;
	cout << setw(max_width) << "Safety Stock: " << safetyStock << "Ton" << endl;
	cout << setw(max_width) << "Availablestock till: " << stockDuration << " months" << endl;
	cout << endl;

	cout << "[*] Fullstock: " << fullStock << " Ton" << endl;
	cout << "[*] Balance raw material stock: " << endStock << "Ton" << endl
		 << endl;
}

// Getters
string Material::getMaterialType()
{
	return materialType;
}
string Material::getMaterialQulaity()
{
	return materialQulaity;
}
long Material::getCost()
{
	return cost;
}
int Material::getSuppliedQuantity()
{
	return suppliedQuantity;
}
int Material::getSafetyStock()
{
	return safetyStock;
}
int Material::getAvailableStock()
{
	return availableStock;
}
int Material::getOrderedStock()
{
	return orderedStock;
}
int Material::getStockDuration()
{
	return stockDuration;
}

// Setters
void Material::setMaterialType(string materialType)
{
	this->materialType = materialType;
}
void Material::setMaterialQulaity(string materialQulaity)
{
	this->materialQulaity = materialQulaity;
}
void Material::setCost(long cost)
{
	this->cost = cost;
}
void Material::setSuppliedQuantity(int suppliedQuantity)
{
	this->suppliedQuantity = suppliedQuantity;
}
void Material::setSafetyStock(int safetyStock)
{
	this->safetyStock = safetyStock;
}
void Material::setAvailableStock(int availableStock)
{
	this->availableStock = availableStock;
}
void Material::setOrderedStock(int orderedStock)
{
	this->orderedStock = orderedStock;
}
void Material::setStockDuration(int stockDuration)
{
	this->stockDuration = stockDuration;
}

const string Material::toString() const
{
	ostringstream buffer;

	buffer << fixed << showpoint << setprecision(2)
		   << "materialID: " << materialID << endl
		   << "materialType: " << materialType << endl
		   << "materialQulaity: " << materialQulaity << endl
		   << "cost: " << cost << endl
		   << "suppliedQuantity: " << suppliedQuantity << endl
		   << "safetyStock: " << safetyStock << endl
		   << "availableStock: " << availableStock << endl
		   << "orderedStock: " << orderedStock << endl
		   << "stockDuration: " << stockDuration << endl
		   << "fullStock: " << fullStock << endl
		   << "endStock: " << endStock << endl
		   << endl;

	return buffer.str();
}
