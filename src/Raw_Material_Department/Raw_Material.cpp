#include <iostream>
#include <string>
#include "Raw_Material.hpp"

using namespace std;

Material* materialArray[maxMemberCount];

int Raw_Material::materialCount = 0;

Raw_Material::~Raw_Material() { 
	// Super class destructor is sufficient
}


void Raw_Material::countMaterial(){ 
	materialCount++;
}

int Raw_Material::getMaterialCount() { 
	return materialCount; 
}


void Raw_Material::addMaterial(string materialType, string materialQulaity, float cost, int suppliedQuantity, int safetystock, int availableStock, int orderdStock, int stockDuration) {
	if(materialCount < maxMemberCount) {
		materialArray[materialCount] = new Material(materialCount, materialType, materialQulaity, cost, suppliedQuantity, safetystock, availableStock, orderdStock, stockDuration);

		countMaterial();
	}
	else {
		cout << "[-] Department is already full!" << endl;
	}
}

void Raw_Material::removeMaterial(int productID){
	delete materialArray[productID];
	materialArray[productID] = nullptr;
}

void Raw_Material::getMaterial(int productID) {
	if(materialArray[productID] != nullptr){
		cout << "--------------------------------------------------------------------" << endl << endl;
		materialArray[productID] -> displayProdDetails();
	}
	else {
		cout << "[-] Requested material is not available!" << endl << endl;
	}
}
