#pragma once

#include <string>

#include "../common/Department.hpp"
#include "Material.hpp"

class Raw_Material : public Department
{
private:
	Material *materials;
	static int materialCount;

public:
	Raw_Material() : Department("Raw Materials"){};

	~Raw_Material();

	void countMaterial();
	static int getMaterialCount();

	// Manipulate Materials
	void addMaterial(std::string materialType, std::string materialQulaity, long cost, int suppliedQuantity, int safetystock,
					 int availableStock, int orderedStock, int stockDuration);
	void removeMaterial(int materialID);
	void getMaterial(int materialID);

	const std::string toString();
	const std::string toString(int materialID) const;
};
