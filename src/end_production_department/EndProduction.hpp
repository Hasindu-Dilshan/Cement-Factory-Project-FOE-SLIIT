#pragma once

#include <string>

#include "../common/Department.hpp"
#include "Product.hpp"

class EndProduction : public Department
{
private:
	Product *products;
	static int productCount;

public:
	EndProduction() : Department("End Production"){};

	~EndProduction();

	void countProduct();
	static int getProductCount();

	// Manipulate Products
	void addProduct(std::string productType, float cost, float price, float chemicalCombinationSo3,
					float chemicalCombinationChloride, int prodQuantity, int reqProdQuantity, int stockDuration);
	void removeProduct(int productID);
	void getProduct(int productID);

	const std::string toString();
	const std::string toString(int productID) const;
};
