#ifndef class_2 
#define class_2
#include <string>
using namespace std;

class Raw_Material {
private:
  string MaterialType;
  string MaterialQulaity;
	float cost;
	int SuppliedQuantity;
	int Safetystock;
	int Availablestock;
  int Orderdstock;
	int StockDuration;

  static int objectCount; 

public:
  Raw_Material(){}
  
  Raw_Material(string mater,string qulit, float co, int quint, int safe, int avai, int order, int st_D);

  ~Raw_Material();

  void countObject();
  void calcFullstock();
  void calcEndstock(); 
  void displayProdDetails();
  void setcalcFullstock(float fulls);
  void setcalcEndstock(int ends);
  
  //Getters
  string getMaterialType();
  string getMaterialQulaity();
	float getCost();
  int getSuppliedQuantity();
  int getSafetystock();
	int getAvailablestock();
  int getOrderdstock();
	int getStockDuration();
  static int getObjectCount();
  // Setters
  void setMaterialType(string MaterialType);
  void setMaterialQulaity(string MaterialQulaity);
	void setCost(float cost);
	void setSuppliedQuantity(int SuppliedQuantity);
	void setSafetystock(int Safetystock);
	void setAvailablestock(int Availablestock);
	void setOrderdstock(int Orderdstock);
	void setStockDuration(int stockDuration);
}; 
#endif