#ifndef class_2 
#define class_2
#include <string>
using namespace std;

class End_Production {
private:
  string productType;
  float cost;
  float price;
  float chemicalCombinationSo3;
  float chemicalCombinationChloride;
  int prodQuantity;
  int reqprodQuantity;
  int stockDuration;
  static int objectCount; 

public:
  End_Production(){}
  
  End_Production(string prod, float co, float pr, float chem1, float chem2, int p_Q, int rp_Q, int st_D);

  ~End_Production();

  void countObject();
  void calcProfit();
  void calcDemand(); 
  void calcDemandCost();
  void calcTotalProfit();
  void displayProdDetails();
  void setcalcProfit(float prof);
  void setcalcDemand(int dem);
  
  //Getters
  string getProductType();
  float getCost();
  float getPrice();
  float getChemicalCombinationSo3();
  float getChemicalCombinationChloride();
  int getProdQuantity();
  int getReqProdQuantity();
  int getStockDuration();
  static int getObjectCount();
  // Setters
  void setProductType(string productType);
  void setCost(float cost);
  void setPrice(float price);
  void setChemicalCombinationSo3(float chemicalCombinationSo3);
  void setChemicalCombinationChloride(float chemicalCombinationChloride);
  void setProdQuantity(int prodQuantity);
  void setReqprodQuantity(int reqprodQuantity);
  void setStockDuration(int stockDuration);
}; 
#endif