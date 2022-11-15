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
	int reqProdQuantity;
	int stockDuration;

	static int objectCount;

public:
	End_Production();
	
	End_Production(string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration);
		 
	~End_Production();

	void countObject();
	void calcProfit();
	void calcDemand();
	void displayProdDetails();
	void setcalcProfit(float prof);
	void setcalcDemand(int dem);

	// Getters
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
	void setReqProdQuantity(int reqprodQuantity);
	void setStockDuration(int stockDuration);
};
