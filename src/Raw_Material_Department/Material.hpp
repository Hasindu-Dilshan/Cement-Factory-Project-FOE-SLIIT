#pragma once

#include <string>
#include <iostream>

using namespace std;

class Material {
private:
	int materialID;
    string materialType;
    string materialQulaity;
	float cost;
	int suppliedQuantity;
	int safetystock;
	int availableStock;
    int orderdStock;
	int stockDuration;

public:
    Material();
	
	Material(int materialID, string materialType, string materialQulaity, float cost, int suppliedQuantity, int safetystock, int availableStock, int orderdStock, int stockDuration);
		 
	~Material();

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
    
    // Setters
    void setMaterialType(string materialType);
    void setMaterialQulaity(string materialQulaity);
    void setCost(float cost);
    void setSuppliedQuantity(int muppliedQuantity);
    void setSafetystock(int safetystock);
    void setAvailablestock(int availableStock);
    void setOrderdstock(int orderdStock);
    void setStockDuration(int stockDuration);

};
