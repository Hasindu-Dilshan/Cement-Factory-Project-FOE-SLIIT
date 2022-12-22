#pragma once

#include <string>
#include <iostream>

using namespace std;

class Product
{
private:
	int productID;
	string productType;
	float cost;
	float price;
	float chemicalCombinationSo3;
	float chemicalCombinationChloride;
	int prodQuantity;
	int reqProdQuantity;
	int stockDuration;
	float profit;
	int demand;

public:
	Product();

	Product(int productID, string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration);

	~Product();

	void calcProfit();
	void calcDemand();
	void displayProdDetails();

	// Getters
	string getProductType();
	float getCost();
	float getPrice();
	float getChemicalCombinationSo3();
	float getChemicalCombinationChloride();
	int getProdQuantity();
	int getReqProdQuantity();
	int getStockDuration();
	float getProfit();
	int getDemand();

	// Setters
	void setProductType(string productType);
	void setCost(float cost);
	void setPrice(float price);
	void setChemicalCombinationSo3(float chemicalCombinationSo3);
	void setChemicalCombinationChloride(float chemicalCombinationChloride);
	void setProdQuantity(int prodQuantity);
	void setReqProdQuantity(int reqprodQuantity);
	void setStockDuration(int stockDuration);

	const string toString() const;
};
