#pragma once

#include <string>
using namespace std;

class Department{
private:
	static int idCount;

protected:
	int id;
	string depName;

public:
	Department();
	Department(string name);
		 
	~Department();

	void countDep();

	// Getters
	int getId();
	string getName();

	// Setters
	void setId();
	void setName(string depName);
	
};
