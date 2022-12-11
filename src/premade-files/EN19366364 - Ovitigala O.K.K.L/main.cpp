#include <iostream>
#include <string>
#include "../End_Production_Department/End_Production.h"
using namespace std;

int main(){

  End_Production endProduct1("INSEE Sanstha", 2100, 3200, 3, 0.08, 500800, 500000, 6);
  End_Production endProduct2("INSEE Mahaweli Marine Plus", 2500, 3500, 3, 0.08, 210900, 210000, 4);
  End_Production endProduct3("INSEE MAHAWELI MARINE", 2300, 3300, 2.5, 0.078, 356000, 355000, 5);
  End_Production endProduct4("INSEE RAPIDFLOW PLUS", 2500, 3800, 3, 0.075, 225500, 225000, 6);

  cout<<"             INSEE Cement Plant"<<endl;
  cout<<"         End Production Department"<<endl<<endl;
  
  endProduct1.displayProdDetails();
	endProduct2.displayProdDetails();
  endProduct3.displayProdDetails();
  endProduct4.displayProdDetails();
  
  cout << "No. of Cement Types: " <<End_Production::getObjectCount() << endl;
}