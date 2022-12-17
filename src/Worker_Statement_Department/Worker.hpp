#pragma once

#include <string>
#include <iostream>

using namespace std;

class Worker {
private:
	int workerID;
	string workerName;
	string workerType;
	int workingHoursInTheMonth;
	int fixWorkingHoursPerDay;
	int paymentForADay;
	int overTimeHours;
	int overTimePaymentPerHour;

public:
	Worker();
	
	Worker(int workerID, string workerName, string workerType, int workingHoursInTheMonth, int fixWorkingHoursPerDay, int paymentForADay, int overTimeHours, int overTimePaymentPerHour);
		 
	~Worker();

	void calcWorkingDaysForTheMonth();
	void calcSalary(); 
	void displayworkerTypeDetails();

	//Getters
	string getWorkerName();
	string getWorkerType();
	float getWorkingHoursInTheMonth();
	int getFixWorkingHoursPerDay();
	float getPaymentForADay();
	float getOverTimeHours();
	float getOverTimePaymentPerHour();

	// Setters
	void setWorkerName(string workerName);
	void setWorkerType(string workerType);
	void setWorkingHoursInTheMonth(int workingHoursInTheMonth);
	void setFixWorkingHoursPerDay(int fixWorkWingHoursPerDay);
	void setPaymentForADay(int paymentForADay);
	void setOverTimeHours(int overTimeHours);
	void setOverTimePaymentPerHour(int overTimePaymentPerHour);
};
