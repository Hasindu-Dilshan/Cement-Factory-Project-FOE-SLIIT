#include <iostream>
#include <string>
#include "Raw_Material.h"
using namespace std;

int main(){

  Raw_Material rawMaterial1("Limestone", "A Grade", 6700000, 6200, 500, 8300, 3000, 2);
  Raw_Material rawMaterial2("Sulfur trioxide", "A Grade", 100000, 6, 11, 3, 4, 1);
  Raw_Material rawMaterial3("Flyash", "B Grade", 2000000, 20, 5, 25, 10, 2);
  Raw_Material rawMaterial4("Cole", "C Grade", 3200000, 8000, 6000, 3000, 20000, 6);

  cout<<"           INSEE Cement Plant"<<endl;
  cout<<"        Raw Material Department"<<endl<<endl;
  
  rawMaterial1.displayProdDetails();
	rawMaterial2.displayProdDetails();
  rawMaterial3.displayProdDetails();
  rawMaterial4.displayProdDetails();
  
  cout << "No. of Raw Material Types: " <<Raw_Material::getObjectCount() << endl;
}