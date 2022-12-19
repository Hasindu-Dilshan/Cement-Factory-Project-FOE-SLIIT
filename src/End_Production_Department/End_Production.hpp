#pragma once

#include <string>

#include "../common/Department.hpp"
#include "Product.hpp"

class End_Production : public Department
{
private:
	Product *products;
	static int productCount;

public:
	End_Production() : Department("End Production"){};

	~End_Production();

	void countProduct();
	static int getProductCount();

	// Manipulate Products
	void addProduct(string productType, float cost, float price, float chemicalCombinationSo3, float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration);
	void removeProduct(int productID);
	void getProduct(int productID);

	const string toString();
	const string toString(int productID) const;
};
