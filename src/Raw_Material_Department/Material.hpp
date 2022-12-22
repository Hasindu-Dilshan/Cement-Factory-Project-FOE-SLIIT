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
    long cost;
    int suppliedQuantity;
    int safetyStock;
    int availableStock;
    int orderedStock;
    int stockDuration;
    int fullStock;
    int endStock;

public:
    Material();
    Material(int materialID, string materialType, string materialQulaity, long cost, int suppliedQuantity, int safetyStock,
             int availableStock, int orderedStock, int stockDuration);

    ~Material();

    void calcFullStock();
    void calcEndStock();
    void displayProdDetails();

    // Getters
    string getMaterialType();
    string getMaterialQulaity();
    long getCost();
    int getSuppliedQuantity();
    int getSafetyStock();
    int getAvailableStock();
    int getOrderedStock();
    int getStockDuration();

    // Setters
    void setMaterialType(string materialType);
    void setMaterialQulaity(string materialQulaity);
    void setCost(long cost);
    void setSuppliedQuantity(int muppliedQuantity);
    void setSafetyStock(int safetyStock);
    void setAvailableStock(int availableStock);
    void setOrderedStock(int orderedStock);
    void setStockDuration(int stockDuration);

    const string toString() const;
};
