#pragma once

#include <string>

#include "../common/Department.hpp"
#include "Material.hpp"

using namespace std;

class Raw_Material : public Department {
private:
	Material* materials;
	static int materialCount;

public:
	Raw_Material() : Department("Raw Materials") {};
		 
	~Raw_Material();

	void countMaterial();
	static int getMaterialCount();


	// Manipulate Materials
	void addMaterial(string materialType, string materialQulaity, float cost, int suppliedQuantity, int safetystock, int availableStock, int orderdStock, int stockDuration);
	void removeMaterial(int materialID);
	void getMaterial(int materialID);
}; 
