#include "../src/End_Production.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
	/*
	End_Production prod1("INSEE Sanstha", 1000, 1500, 3, 0.08, 400, 375, 6);
	End_Production prod2("INSEE Mahaweli Marine Plus", 800, 1100, 3, 0.08, 700, 700, 4);
	End_Production prod3("INSEE MAHAWELI MARINE", 1200, 1800, 2.5, 0.078, 650, 645, 6);
	End_Production prod4("INSEE RAPIDFLOW PLUS", 1200, 1800, 3, 0.075, 650, 645, 6);

	prod1.displayProdDetails();
	prod2.displayProdDetails();
	prod3.displayProdDetails();
	prod4.displayProdDetails();

	cout << "No. of Cement Types: " << End_Production::getObjectCount() << endl << endl;
	*/

	End_Production endProductionDepartment;
	//Row_Material rowMaterialsDepartment;

	endProductionDepartment.addProduct("INSEE Sanstha", 1000, 1500, 3, 0.08, 400, 375, 6);
	endProductionDepartment.addProduct("INSEE Mahaweli Marine Plus", 800, 1100, 3, 0.08, 700, 700, 4);
	endProductionDepartment.addProduct("INSEE MAHAWELI MARINE", 1200, 1800, 2.5, 0.078, 650, 645, 6);
	endProductionDepartment.addProduct("INSEE RAPIDFLOW PLUS", 1200, 1800, 3, 0.075, 650, 645, 6);

	/*
	rowMaterialsDepartment.addMaterial("so3");
	rowMaterialsDepartment.addMaterial("so3");
	rowMaterialsDepartment.addMaterial("so3");
	rowMaterialsDepartment.addMaterial("so3");
	*/

	endProductionDepartment.getProduct(0);
	endProductionDepartment.getProduct(1);

	endProductionDepartment.removeProduct(0);

	endProductionDepartment.getProduct(0);
	endProductionDepartment.getProduct(1);

	/*
	rowMaterialsDepartment.getMaterial(1);
	rowMaterialsDepartment.getMaterial(1);
	*/

	return 0;
}