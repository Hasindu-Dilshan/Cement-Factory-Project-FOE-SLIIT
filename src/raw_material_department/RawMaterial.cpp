#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "RawMaterial.hpp"

Material *materialArray[maxMemberCount];

int RawMaterial::materialCount = 0;

RawMaterial::~RawMaterial()
{
	// Super class destructor is sufficient
}

void RawMaterial::countMaterial()
{
	materialCount++;
}

int RawMaterial::getMaterialCount()
{
	return materialCount;
}

void RawMaterial::addMaterial(std::string materialType, std::string materialQulaity, long cost, int suppliedQuantity,
								int safetyStock, int availableStock, int orderedStock, int stockDuration)
{
	if (materialCount < maxMemberCount)
	{
		materialArray[materialCount] = new Material(materialCount, materialType, materialQulaity, cost, suppliedQuantity, safetyStock, availableStock, orderedStock, stockDuration);
		countMaterial();
	}
	else
	{
		std::cout << "[-] Department is already full!" << std::endl;
	}
}

void RawMaterial::removeMaterial(int materialID)
{
	delete materialArray[materialID];
	materialArray[materialID] = nullptr;
}

void RawMaterial::getMaterial(int materialID)
{
	if (materialArray[materialID] != nullptr)
	{
		std::cout << "--------------------------------------------------------------------" << std::endl
			 << std::endl;
		materialArray[materialID]->displayProdDetails();
	}
	else
	{
		std::cout << "[-] Requested material is not available!" << std::endl
			 << std::endl;
	}
}

const std::string RawMaterial::toString()
{
	std::ostringstream all_buffer;

	for (int materialID = 0; materialID < materialCount; materialID++)
	{
		all_buffer << toString(materialID);
	}

	return all_buffer.str();
}

// const(1) : Make string immutable during return mechanism
// const(2) : Read-only access to class's data members
const std::string RawMaterial::toString(int materialID) const
{
	return materialArray[materialID]->toString();
}