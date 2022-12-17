#include <iostream>
#include <string>
#include <iomanip>

#include "Worker.hpp"

using namespace std;

// Default Constructor
Worker::Worker() {

}

// Overloaded Constructor
Worker::Worker(int workerID, string workerName, string workerType, int workingHoursInTheMonth, int fixWorkingHoursPerDay, int paymentForADay, int overTimeHours, int overTimePaymentPerHour) {

	this -> workerID = workerID;
	this -> workerName = workerName;
	this -> workerType = workerType;
	this -> workingHoursInTheMonth = workingHoursInTheMonth;
	this -> fixWorkingHoursPerDay = fixWorkingHoursPerDay;
	this -> paymentForADay = paymentForADay;
	this -> overTimeHours = overTimeHours;
	this -> overTimePaymentPerHour = overTimePaymentPerHour;

}

// Destructor
Worker::~Worker() {
	cout << "[+] Worker id:" << workerID << " " << workerName << " Removed Successfully!" << endl << endl;
}

void Worker::calcWorkingDaysForTheMonth() {
	float workingDays = ( workingHoursInTheMonth / fixWorkingHoursPerDay );

	cout << "[*] Working days for the month: " <<  workingDays <<"  days" << endl;  
}

void Worker::calcSalary() {
	float salary = (( workingHoursInTheMonth / fixWorkingHoursPerDay ) * paymentForADay ) + ( overTimeHours * overTimePaymentPerHour );

	cout << "[*] Salary: Rs." <<  salary << " /=" << endl;  
}

void Worker::displayworkerTypeDetails() {
	const int max_width = 35;

	cout << setw(max_width) << "Name of the Worker: " <<  workerName << endl;
	cout << setw(max_width) << "Worker Type: " <<  workerType << endl;
	cout << setw(max_width) << "Working Hours in The Month: " << workingHoursInTheMonth << " hours" << endl;
	cout << setw(max_width) << "Fix Working Hours per Day: " << fixWorkingHoursPerDay << " hours" << endl;
	cout << setw(max_width) << "Payment For A Day: " << "Rs." << paymentForADay << " /=" << endl;
	cout << setw(max_width) << "Overtime Hours: " <<  overTimeHours << " hours" << endl;
	cout << setw(max_width) << "Overtime Payment per Hour: " << "Rs." <<  overTimePaymentPerHour << " /=" << endl;
	cout << endl;
  
	calcWorkingDaysForTheMonth();
	calcSalary();
}

//Getters
string Worker::getWorkerName() {
	return workerName; 
}
string Worker::getWorkerType() {
	return workerType; 
}
float Worker::getWorkingHoursInTheMonth() {
	return workingHoursInTheMonth; 
}
int Worker::getFixWorkingHoursPerDay() {
	return fixWorkingHoursPerDay; 
}
float Worker::getPaymentForADay() {
	return paymentForADay; 
}
float Worker::getOverTimeHours() {
	return overTimeHours; 
}
float Worker::getOverTimePaymentPerHour() {
	return overTimePaymentPerHour; 
}

// Setters
void Worker::setWorkerName(string workerName) {
	this->workerName = workerName;
}
void Worker::setWorkerType(string workerType) {
	this->workerType = workerType;
}
void Worker::setWorkingHoursInTheMonth(int workingHoursInTheMonth) {
	this->workingHoursInTheMonth = workingHoursInTheMonth;
}
void Worker::setFixWorkingHoursPerDay(int fixWorkingHoursPerDay) {
	this->fixWorkingHoursPerDay = fixWorkingHoursPerDay;
}
void Worker::setPaymentForADay(int paymentForADay) {
	this->paymentForADay = paymentForADay;
}
void Worker::setOverTimeHours(int overTimeHours) {
	this->overTimeHours = overTimeHours;
}
void Worker::setOverTimePaymentPerHour(int overTimePaymentPerHour) {
	this->overTimePaymentPerHour = overTimePaymentPerHour;
}