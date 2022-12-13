#include "../src/End_Production_Department/End_Production.hpp"
#include "../src/Raw_Material_Department/Raw_Material.hpp"
#include <iostream>
#include <string>
using namespace std;

string decorate(string decorator, bool startEnd, string text) {
	if(startEnd) {
		return decorator + "<" + text + ">" + decorator;
	}
	else {
		return decorator + "</" + text + ">" + decorator;
	}
}

int main() {

	/* Make Department Objects */
	End_Production endProductionDepartment;
	Raw_Material rawMaterialDepartment; 

	/* End Production Department affairs */
	endProductionDepartment.addProduct("INSEE Sanstha", 1000, 1500, 3, 0.08, 400, 375, 6);
	endProductionDepartment.addProduct("INSEE Mahaweli Marine Plus", 800, 1100, 3, 0.08, 700, 700, 4);
	endProductionDepartment.addProduct("INSEE MAHAWELI MARINE", 1200, 1800, 2.5, 0.078, 650, 645, 6);
	endProductionDepartment.addProduct("INSEE RAPIDFLOW PLUS", 1200, 1800, 3, 0.075, 650, 645, 6);

	/* Raw Materials Department affairs */
	rawMaterialDepartment.addMaterial("Limestone", "A Grade", 6700000, 6200, 500, 8300, 3000, 2);
	rawMaterialDepartment.addMaterial("Sulfur trioxide", "A Grade", 100000, 6, 11, 3, 4, 1);
	rawMaterialDepartment.addMaterial("Flyash", "B Grade", 2000000, 20, 5, 25, 10, 2);
	rawMaterialDepartment.addMaterial("Cole", "C Grade", 3200000, 8000, 6000, 3000, 20000, 6);

	string decorator = "--------------------";

	/* Show End Production Department affairs */
	cout << decorate(decorator, true, endProductionDepartment.getName()) << endl << endl;

	endProductionDepartment.getProduct(0);
	endProductionDepartment.getProduct(1);

	endProductionDepartment.removeProduct(0);

	endProductionDepartment.getProduct(0);
	endProductionDepartment.getProduct(1);

	cout << decorate(decorator, false, endProductionDepartment.getName()) << endl << endl << endl;

	/* Show Raw Materials Department affairs */
	cout << decorate(decorator, true, rawMaterialDepartment.getName()) << endl << endl;
	
	rawMaterialDepartment.getMaterial(0);
	rawMaterialDepartment.getMaterial(1);

	rawMaterialDepartment.removeMaterial(0);

	rawMaterialDepartment.getMaterial(0);
	rawMaterialDepartment.getMaterial(1);

	cout << decorate(decorator, false, rawMaterialDepartment.getName()) << endl << endl;

	return 0;
}
