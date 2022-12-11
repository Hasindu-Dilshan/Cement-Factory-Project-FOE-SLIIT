#include <iostream>
#include <string>
#include "Transport.h"
using namespace std;

int main(){

  
  Transport staff_T("Staff_Transport",1200, 12,800);
  Transport rawmaterial_T("Raw_Material_Transport",1800,6,900);
  Transport endproduct_T("End_Product_Transport",2200,8,1000);

  //Transport(string type, float fuel_I, float fuel_C, float AvgfuelCon, float KM)

  cout<<"               INSEE Cement Plant"<<endl;
  cout<<"        Logistic and Trandport Department"<<endl<<endl;

  staff_T.displayTransportDetails();
  rawmaterial_T.displayTransportDetails();
  endproduct_T.displayTransportDetails();

  
  
}