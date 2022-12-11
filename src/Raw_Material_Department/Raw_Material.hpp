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
	Raw_Material() : Department("Raw Materials"){};
		 
	~Raw_Material();

	void countMaterial();

	void addMaterial(string mater,string qulit, float co, int quint, int safe, int avai, int order, int st_D);

	void removeMaterial(int materialID);

	void getMaterial(int materialID);

	static int getMaterialCount();
}; 
