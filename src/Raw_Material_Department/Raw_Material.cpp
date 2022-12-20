#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Raw_Material.hpp"

using namespace std;

Material *materialArray[maxMemberCount];

int Raw_Material::materialCount = 0;

Raw_Material::~Raw_Material()
{
	// Super class destructor is sufficient
}

void Raw_Material::countMaterial()
{
	materialCount++;
}

int Raw_Material::getMaterialCount()
{
	return materialCount;
}

void Raw_Material::addMaterial(string materialType, string materialQulaity, float cost, int suppliedQuantity, int safetyStock, int availableStock, int orderdStock, int stockDuration)
{
	if (materialCount < maxMemberCount)
	{
		cout << "Raw_Material.cpp > availableStock=" << availableStock << endl;
		materialArray[materialCount] = new Material(materialCount, materialType, materialQulaity, cost, suppliedQuantity, safetyStock, availableStock, orderdStock, stockDuration);
		countMaterial();
	}
	else
	{
		cout << "[-] Department is already full!" << endl;
	}
}

void Raw_Material::removeMaterial(int materialID)
{
	delete materialArray[materialID];
	materialArray[materialID] = nullptr;
}

void Raw_Material::getMaterial(int materialID)
{
	if (materialArray[materialID] != nullptr)
	{
		cout << "--------------------------------------------------------------------" << endl
			 << endl;
		materialArray[materialID]->displayProdDetails();
	}
	else
	{
		cout << "[-] Requested material is not available!" << endl
			 << endl;
	}
}

const string Raw_Material::toString()
{
	ostringstream all_buffer;

	for (int materialID = 0; materialID < materialCount; materialID++)
	{
		all_buffer << toString(materialID);
	}

	return all_buffer.str();
}

// const(1) : Make string immutable during return mechanism
// const(2) : Read-only access to class's data members
const string Raw_Material::toString(int materialID) const
{
	return materialArray[materialID]->toString();
}