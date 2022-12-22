#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Raw_Material.hpp"

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

void Raw_Material::addMaterial(std::string materialType, std::string materialQulaity, long cost, int suppliedQuantity,
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

void Raw_Material::removeMaterial(int materialID)
{
	delete materialArray[materialID];
	materialArray[materialID] = nullptr;
}

void Raw_Material::getMaterial(int materialID)
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

const std::string Raw_Material::toString()
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
const std::string Raw_Material::toString(int materialID) const
{
	return materialArray[materialID]->toString();
}