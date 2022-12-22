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
	int fixedWorkingHoursPerDay;
	int paymentForADay;
	int overTimeHours;
	int overTimePaymentPerHour;
	int workingDays;
	float salary;

public:
	Worker();
	
	Worker(int workerID, string workerName, string workerType, int workingHoursInTheMonth, int fixedWorkingHoursPerDay, int paymentForADay, int overTimeHours, int overTimePaymentPerHour);
		 
	~Worker();

	void calcWorkingDaysForTheMonth();
	void calcSalary(); 
	void displayworkerTypeDetails();

	//Getters
	string getWorkerName();
	string getWorkerType();
	float getWorkingHoursInTheMonth();
	int getFixedWorkingHoursPerDay();
	float getPaymentForADay();
	float getOverTimeHours();
	float getOverTimePaymentPerHour();
	int getWorkingDays();
	float getSalary();

	// Setters
	void setWorkerName(string workerName);
	void setWorkerType(string workerType);
	void setWorkingHoursInTheMonth(int workingHoursInTheMonth);
	void setFixedWorkingHoursPerDay(int fixWorkWingHoursPerDay);
	void setPaymentForADay(int paymentForADay);
	void setOverTimeHours(int overTimeHours);
	void setOverTimePaymentPerHour(int overTimePaymentPerHour);

	const string toString() const;
};
