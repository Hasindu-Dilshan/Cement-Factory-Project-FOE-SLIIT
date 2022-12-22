#pragma once

#include <string>
#include <iostream>

class Material
{
private:
    int materialID;
    std::string materialType;
    std::string materialQulaity;
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
    Material(int materialID, std::string materialType, std::string materialQulaity, long cost, int suppliedQuantity, int safetyStock,
             int availableStock, int orderedStock, int stockDuration);

    ~Material();

    void calcFullStock();
    void calcEndStock();
    void displayProdDetails();

    // Getters
    std::string getMaterialType();
    std::string getMaterialQulaity();
    long getCost();
    int getSuppliedQuantity();
    int getSafetyStock();
    int getAvailableStock();
    int getOrderedStock();
    int getStockDuration();

    // Setters
    void setMaterialType(std::string materialType);
    void setMaterialQulaity(std::string materialQulaity);
    void setCost(long cost);
    void setSuppliedQuantity(int muppliedQuantity);
    void setSafetyStock(int safetyStock);
    void setAvailableStock(int availableStock);
    void setOrderedStock(int orderedStock);
    void setStockDuration(int stockDuration);

    const std::string toString() const;
};
