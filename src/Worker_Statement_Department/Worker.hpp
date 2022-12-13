#pragma once

#include <string>
#include <iostream>

using namespace std;

class Worker {
private:
	int workerID;
	string WorkerName;
	string WorkerType;
	int WorkingHoursInTheMonth;
	int FixWorkingHoursPerDay;
	int PaymentForADay;
	int OvertimeHours;
	int OvertimePaymentPerHour;

public:
	Worker();
	
	Worker(int workerID, string name, string worker, int wh, int fx, int dy, int ot, int hr);
		 
	~Worker();

	void calcWorkingdaysforthemonth();
	void calcSalary(); 
	void displayworkerTypeDetails();
	void setcalcWorkingdaysforthemonth(float dys);
	void setcalcSalary(int slry);

	//Getters
	string getWorkerName();
	string getWorkerType();
	float getWorkingHoursInTheMonth();
	int getFixWorkingHoursPerDay();
	float getPaymentForADay();
	float getOvertimeHours();
	float getOvertimePaymentPerHour();


	// Setters
	void setWorkerName(string workerName);
	void setWorkerType(string workerType);
	void setWorkingHoursInTheMonth(int workingHoursInTheMonth);
	void setFixWorkingHoursPerDay(int fixWorkWingHoursPerDay);
	void setPaymentForADay(int PpymentForADay);
	void setOvertimeHours(int overtimeHours);
	void setOvertimePaymentPerHour(int overtimePaymentPerHour);
};
