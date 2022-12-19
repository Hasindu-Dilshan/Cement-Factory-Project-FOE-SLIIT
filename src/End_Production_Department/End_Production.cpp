#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "End_Production.hpp"

using namespace std;

Product *productArray[maxMemberCount];

// Initialize product count
int End_Production::productCount = 0;

// Destructor
End_Production::~End_Production()
{
	// Super class destructor is sufficient
}

// Increment object count after each object creation
void End_Production::countProduct()
{
	End_Production::productCount++;
}

int End_Production::getProductCount()
{
	return productCount;
}

void End_Production::addProduct(string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration)
{
	if (productCount < maxMemberCount)
	{
		productArray[productCount] = new Product(productCount, productType, cost, price, chemicalCombinationSo3, chemicalCombinationChloride, prodQuantity, reqProdQuantity, stockDuration);

		countProduct();
	}
	else
	{
		cout << "[-] Department is already full!" << endl;
	}
}

void End_Production::removeProduct(int productID)
{
	delete productArray[productID];
	productArray[productID] = nullptr;
}

void End_Production::getProduct(int productID)
{
	if (productArray[productID] != nullptr)
	{
		cout << "--------------------------------------------------------------------" << endl
			 << endl;
		productArray[productID]->displayProdDetails();
	}
	else
	{
		cout << "[-] Requested prouduct is not available!" << endl
			 << endl;
	}
}

const string End_Production::toString()
{
	ostringstream all_buffer;

	for (int productID = 0; productID < productCount; productID++)
	{
		all_buffer << End_Production::toString(productID);
	}

	return all_buffer.str();
}

// const(1) : Make string immutable during return mechanism
// const(2) : Read-only access to class's data members
const string End_Production::toString(int productID) const
{
	return productArray[productID]->toString();
}