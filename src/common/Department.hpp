#pragma once

#include <string>

const int maxMemberCount = 50;

class Department
{
private:
	static int idCount;

protected:
	int id;
	std::string depName;

public:
	Department();
	Department(std::string depName);

	~Department();

	void countDep();

	// Getters
	int getId();
	std::string getName();

	// Setters
	void setId();
	void setName(std::string depName);
};
