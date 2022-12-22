#include <iostream>
#include <string>

#include "Department.hpp"

// Initialize id count
int Department::idCount = 0;

// Default Constructor
Department::Department() {

}

// Overloaded Constructor
Department::Department(std::string depName) {
	countDep();

	this -> id = idCount;
	this -> depName = depName;
	
	std::cout << "[+] Department id:" << this -> id << " " << this -> depName << " was created successfully!" << std::endl << std::endl; 
}

// Destructor
Department::~Department() {
	std::cout << "[+] Department id:" << this -> id << " " << this -> depName << " was destroyed!" << std::endl << std::endl; 
}

// Increment department count after each object creation
void Department::countDep() {
	idCount++;
}

// Getters
int Department::getId() {
	return id;
}
std::string Department::getName(){
	return depName + " Department";
}

// Setters
void Department::setId() {
	this -> id = id;
}
void Department::setName(std::string depName){
	this -> depName = depName;
}
