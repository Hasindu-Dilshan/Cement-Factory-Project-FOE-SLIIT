#pragma once

#include <string>
#include "Department.h"
#include "Product.h"

class End_Production : public Department{
private:
	Product** products;
	static int productCount;

public:
	End_Production();
		 
	~End_Production();

	void countProduct();

	void addProduct(string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration);
	void removeProduct(int productID);

	static int getProductCount();
};
