#pragma once

#include <string>
#include <iostream>

class Worker {
private:
	int workerID;
	std::string workerName;
	std::string workerType;
	int workingHoursInTheMonth;
	int fixedWorkingHoursPerDay;
	int paymentForADay;
	int overTimeHours;
	int overTimePaymentPerHour;
	int workingDays;
	float salary;

public:
	Worker();
	
	Worker(int workerID, std::string workerName, std::string workerType, int workingHoursInTheMonth, int fixedWorkingHoursPerDay, 
			int paymentForADay, int overTimeHours, int overTimePaymentPerHour);
		 
	~Worker();

	void calcWorkingDaysForTheMonth();
	void calcSalary(); 
	void displayworkerTypeDetails();

	//Getters
	std::string getWorkerName();
	std::string getWorkerType();
	float getWorkingHoursInTheMonth();
	int getFixedWorkingHoursPerDay();
	float getPaymentForADay();
	float getOverTimeHours();
	float getOverTimePaymentPerHour();
	int getWorkingDays();
	float getSalary();

	// Setters
	void setWorkerName(std::string workerName);
	void setWorkerType(std::string workerType);
	void setWorkingHoursInTheMonth(int workingHoursInTheMonth);
	void setFixedWorkingHoursPerDay(int fixWorkWingHoursPerDay);
	void setPaymentForADay(int paymentForADay);
	void setOverTimeHours(int overTimeHours);
	void setOverTimePaymentPerHour(int overTimePaymentPerHour);

	const std::string toString() const;
};
