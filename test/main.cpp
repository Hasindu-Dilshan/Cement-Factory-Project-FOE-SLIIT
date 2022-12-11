#include "../src/End_Production_Department/End_Production.hpp"
#include "../src/Raw_Material_Department/Raw_Material.hpp"
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
	Raw_Material rawMaterialDepartment; 

	/* End Production Department functions */
	endProductionDepartment.addProduct("INSEE Sanstha", 1000, 1500, 3, 0.08, 400, 375, 6);
	endProductionDepartment.addProduct("INSEE Mahaweli Marine Plus", 800, 1100, 3, 0.08, 700, 700, 4);
	endProductionDepartment.addProduct("INSEE MAHAWELI MARINE", 1200, 1800, 2.5, 0.078, 650, 645, 6);
	endProductionDepartment.addProduct("INSEE RAPIDFLOW PLUS", 1200, 1800, 3, 0.075, 650, 645, 6);

	/* Raw Materials Department functions */
	rawMaterialDepartment.addMaterial("Limestone", "A Grade", 6700000, 6200, 500, 8300, 3000, 2);
	rawMaterialDepartment.addMaterial("Sulfur trioxide", "A Grade", 100000, 6, 11, 3, 4, 1);
	rawMaterialDepartment.addMaterial("Flyash", "B Grade", 2000000, 20, 5, 25, 10, 2);
	rawMaterialDepartment.addMaterial("Cole", "C Grade", 3200000, 8000, 6000, 3000, 20000, 6);

	/*
	rowMaterialsDepartment.addMaterial("so3");
	rowMaterialsDepartment.addMaterial("so3");
	rowMaterialsDepartment.addMaterial("so3");
	rowMaterialsDepartment.addMaterial("so3");
	*/

	cout << "<End Production Department>" << endl;

	endProductionDepartment.getProduct(0);
	endProductionDepartment.getProduct(1);

	endProductionDepartment.removeProduct(0);

	endProductionDepartment.getProduct(0);
	endProductionDepartment.getProduct(1);

	cout << "</End Production Department>" << endl << endl;

	cout << "<Raw Materials Department>" << endl;
	
	rawMaterialDepartment.getMaterial(0);
	rawMaterialDepartment.getMaterial(1);

	rawMaterialDepartment.removeMaterial(0);

	rawMaterialDepartment.getMaterial(0);
	rawMaterialDepartment.getMaterial(1);

	cout << "</Raw Materials Department>" << endl << endl;


	/*
	rowMaterialsDepartment.getMaterial(1);
	rowMaterialsDepartment.getMaterial(1);
	*/

	return 0;
}
