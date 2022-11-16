#include <iostream>
#include <string>
#include "End_Production.h"

using namespace std;

Product** productArray = new Product*[maxMemberCount];

// Initialize product count
int End_Production::productCount = 0;

// Default Constructor
End_Production::End_Production(){
	
}

// Destructor
End_Production::~End_Production(){

}

// Increment object count after each object creation
void End_Production::countProduct() {
	End_Production::productCount++;
}

void End_Production::addProduct(string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration) {

	if(productCount < maxMemberCount) {
		Product[productCount] = new Product(productCount, productType, cost, price, chemicalCombinationSo3, chemicalCombinationChloride, prodQuantity, reqProdQuantity, stockDuration);

		countProduct();
	}
	else {
		cout << "Department is already full!" << endl;
	}

}

void End_Production::removeProduct(int productID){
	delete Product[productID];
}

// Getters
int End_Production::getProductCount() { 
	return productCount; 
}
