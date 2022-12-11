#include <iostream>
#include <string>
#include "End_Production.hpp"

using namespace std;

Product* productArray[maxMemberCount];

// Initialize product count
int End_Production::productCount = 0;

// Destructor
End_Production::~End_Production(){
	// cout << "[+] Department id:" << this->id << " name: " << this->depName << " was destroyed!" << endl; 
}

// Increment object count after each object creation
void End_Production::countProduct() {
	End_Production::productCount++;
}

void End_Production::addProduct(string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration) {

	if(productCount < maxMemberCount) {
		productArray[productCount] = new Product(productCount, productType, cost, price, chemicalCombinationSo3, chemicalCombinationChloride, prodQuantity, reqProdQuantity, stockDuration);

		countProduct();
	}
	else {
		cout << "[-] Department is already full!" << endl;
	}

}

void End_Production::removeProduct(int productID){
	delete productArray[productID];
	productArray[productID] = nullptr;
}

void End_Production::getProduct(int productID) {
	if(productArray[productID] != nullptr){
		productArray[productID]->displayProdDetails();
		cout << "--------------------------------------------------------------------" << endl << endl;
	}
	else {
		cout << "[-] Requested product is not available!" << endl << endl;
	}
		
}
// Getters
int End_Production::getProductCount() { 
	return productCount; 
}
