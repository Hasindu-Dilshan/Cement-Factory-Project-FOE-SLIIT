#include <iostream>
#include<string>
#include "End_Production.h"
using namespace std;

int End_Production::objectCount = 0;

End_Production::End_Production(string prod, float co, float pr, float chem1, float chem2, int p_Q, int rp_Q, int st_D){
  productType = prod;
  cost = co;
  price = pr;
  chemicalCombinationSo3 =chem1;
  chemicalCombinationChloride =chem2;
  prodQuantity = p_Q;
  reqprodQuantity = rp_Q;
  stockDuration = st_D; 
  countObject();
}

 End_Production::~End_Production(){   
}

void End_Production::countObject(){ 
  objectCount++; 
} 
void End_Production::calcProfit(){
  float profit = (prodQuantity*(price-cost))/1000000;
  cout << "Profit: Rs. " <<  profit <<" Million"<< endl<<endl;  
}
void End_Production::calcDemand(){
  float demand = prodQuantity - reqprodQuantity;
  cout << "No. of products produced than the demand: " <<  demand << endl;  
}
void End_Production::calcDemandCost(){
  float demandCost = (prodQuantity - reqprodQuantity)*500;
  cout << "Cost for overly produced: Rs. " <<  demandCost << endl << endl;
}
void End_Production::calcTotalProfit(){
  float totalProfit = ((prodQuantity*(price-cost))-((prodQuantity - reqprodQuantity)*500))/1000000;
  cout << "Total Profit: Rs. " <<  totalProfit <<" Million"<< endl << endl;
  cout << "----------------------------------------------------" << endl<<endl;
}
void End_Production::displayProdDetails(){
  cout << "Product: " <<  productType << endl;
  cout << "Chemical Combination SO3: " <<  chemicalCombinationSo3 <<"%"<< endl;
  cout << "Chemical Combination Chloride: " <<  chemicalCombinationChloride <<"%"<< endl;
  cout << "Stock Availability: " <<  stockDuration <<" months"<< endl<<endl;
  cout << "Product Quantity per Month: " <<  prodQuantity << endl;
  calcProfit();
  calcDemand();
  calcDemandCost();
  calcTotalProfit();
}

// Getters
string End_Production::getProductType(){
  return productType; 
}
float End_Production::getCost(){
  return cost; 
}
float End_Production::getPrice(){
  return price; 
}
float End_Production::getChemicalCombinationSo3(){
  return chemicalCombinationSo3; 
}
float End_Production::getChemicalCombinationChloride(){
  return chemicalCombinationChloride; 
}
int End_Production::getProdQuantity(){
  return prodQuantity; 
}
int End_Production::getReqProdQuantity(){
  return reqprodQuantity; 
}
int End_Production::getStockDuration(){
  return stockDuration; 
}
int End_Production::getObjectCount() { 
  return objectCount; 
}

// Setters
void End_Production::setProductType(string productType) {
  this->productType = productType;
}
void End_Production::setCost(float cost){
  this->cost = cost;
}
void End_Production::setPrice(float price){
  this->price = price;
}
void End_Production::setChemicalCombinationSo3(float chemicalCombinationSo3){
  this->chemicalCombinationSo3 = chemicalCombinationSo3;
}
void End_Production::setChemicalCombinationChloride(float chemicalCombinationChloride){
  this->chemicalCombinationChloride = chemicalCombinationChloride;
}
void End_Production::setProdQuantity(int prodQuantity){
  this->prodQuantity = prodQuantity;
}
void End_Production::setReqprodQuantity(int reqprodQuantity){
  this->reqprodQuantity = reqprodQuantity;
}
void End_Production::setStockDuration(int stockDuration){
  this->stockDuration = stockDuration;
}
