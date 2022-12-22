#pragma once

#include <string>
#include <iostream>

using namespace std;

class Material
{
private:
    int materialID;
    string materialType;
    string materialQulaity;
    float cost;
    int suppliedQuantity;
    int safetyStock;
    int availableStock;
    int orderedStock;
    int stockDuration;
    float fullStock;
    float endStock;

public:
    Material();
    Material(int materialID, string materialType, string materialQulaity, float cost, int suppliedQuantity, int safetyStock, int availableStock, int orderedStock, int stockDuration);

    ~Material();

    void calcFullStock();
    void calcEndStock();
    void displayProdDetails();

    // Getters
    string getMaterialType();
    string getMaterialQulaity();
    float getCost();
    int getSuppliedQuantity();
    int getSafetyStock();
    int getAvailableStock();
    int getOrderedStock();
    int getStockDuration();

    // Setters
    void setMaterialType(string materialType);
    void setMaterialQulaity(string materialQulaity);
    void setCost(float cost);
    void setSuppliedQuantity(int muppliedQuantity);
    void setSafetyStock(int safetyStock);
    void setAvailableStock(int availableStock);
    void setOrderedStock(int orderedStock);
    void setStockDuration(int stockDuration);

    const string toString() const;
};
