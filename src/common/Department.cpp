#include "Department.hpp"
#include <iostream>
#include <string>

using namespace std;


// Initialize id count
int Department::idCount = 0;

// Default Constructor
Department::Department() {

}

// Overloaded Constructor
Department::Department(string depName) {
	countDep();

	this->id = idCount;
	this->depName = depName;
	
	cout << "[+] Department id:" << this->id << " " << this->depName << " was created successfully!" << endl << endl; 
}

// Destructor
Department::~Department() {
	cout << "[+] Department id:" << this->id << " " << this->depName << " was destroyed!" << endl << endl; 
}

// Increment department count after each object creation
void Department::countDep() {
	idCount++;
}

// Getters
int Department::getId() {
	return id;
}
string Department::getName(){
	return depName;
}

// Setters
void Department::setId() {
	this->id = id;
}
void Department::setName(string depName){
	this->depName = depName;
}
