#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#include "Worker.hpp"

// Default Constructor
Worker::Worker()
{
}

// Overloaded Constructor
Worker::Worker(int workerID, std::string workerName, std::string workerType, int workingHoursInTheMonth, int fixedWorkingHoursPerDay, 
				int paymentForADay, int overTimeHours, int overTimePaymentPerHour)
{
	this->workerID = workerID;
	this->workerName = workerName;
	this->workerType = workerType;
	this->workingHoursInTheMonth = workingHoursInTheMonth;
	this->fixedWorkingHoursPerDay = fixedWorkingHoursPerDay;
	this->paymentForADay = paymentForADay;
	this->overTimeHours = overTimeHours;
	this->overTimePaymentPerHour = overTimePaymentPerHour;

	calcWorkingDaysForTheMonth();
	calcSalary();
}

// Destructor
Worker::~Worker()
{
	std::cout << "[+] Worker id:" << workerID << " " << workerName << " Removed Successfully!" << std::endl
			  << std::endl;
}

void Worker::calcWorkingDaysForTheMonth()
{
	this->workingDays = (int)((float)workingHoursInTheMonth / fixedWorkingHoursPerDay);
}

void Worker::calcSalary()
{
	this->salary = (workingDays * paymentForADay) + (overTimeHours * overTimePaymentPerHour);
}

void Worker::displayworkerTypeDetails()
{
	const int max_width = 35;

	std::cout << std::setw(max_width) << "Name of the Worker: " << workerName << std::endl;
	std::cout << std::setw(max_width) << "Worker Type: " << workerType << std::endl;
	std::cout << std::setw(max_width) << "Working Hours in The Month: " << workingHoursInTheMonth << " hours" << std::endl;
	std::cout << std::setw(max_width) << "Fix Working Hours per Day: " << fixedWorkingHoursPerDay << " hours" << std::endl;
	std::cout << std::setw(max_width) << "Payment For A Day: " << paymentForADay << std::endl;
	std::cout << std::setw(max_width) << "Overtime Hours: " << overTimeHours << " hours" << std::endl;
	std::cout << std::setw(max_width) << "Overtime Payment per Hour: " << overTimePaymentPerHour << std::endl;
	std::cout << std::endl;

	std::cout << "[*] Working days for the month: " << workingDays << " days" << std::endl;
	std::cout << "[*] Salary: " << salary << std::endl;
	std::cout << std::endl;

	calcWorkingDaysForTheMonth();
	calcSalary();
}

// Getters
std::string Worker::getWorkerName()
{
	return workerName;
}
std::string Worker::getWorkerType()
{
	return workerType;
}
float Worker::getWorkingHoursInTheMonth()
{
	return workingHoursInTheMonth;
}
int Worker::getFixedWorkingHoursPerDay()
{
	return fixedWorkingHoursPerDay;
}
float Worker::getPaymentForADay()
{
	return paymentForADay;
}
float Worker::getOverTimeHours()
{
	return overTimeHours;
}
float Worker::getOverTimePaymentPerHour()
{
	return overTimePaymentPerHour;
}
int Worker::getWorkingDays()
{
	return workingDays;
}
float Worker::getSalary()
{
	return salary;
}

// Setters
void Worker::setWorkerName(std::string workerName)
{
	this->workerName = workerName;
}
void Worker::setWorkerType(std::string workerType)
{
	this->workerType = workerType;
}
void Worker::setWorkingHoursInTheMonth(int workingHoursInTheMonth)
{
	this->workingHoursInTheMonth = workingHoursInTheMonth;
}
void Worker::setFixedWorkingHoursPerDay(int fixedWorkingHoursPerDay)
{
	this->fixedWorkingHoursPerDay = fixedWorkingHoursPerDay;
}
void Worker::setPaymentForADay(int paymentForADay)
{
	this->paymentForADay = paymentForADay;
}
void Worker::setOverTimeHours(int overTimeHours)
{
	this->overTimeHours = overTimeHours;
}
void Worker::setOverTimePaymentPerHour(int overTimePaymentPerHour)
{
	this->overTimePaymentPerHour = overTimePaymentPerHour;
}

const std::string Worker::toString() const
{
	std::ostringstream buffer;

	buffer << std::fixed << std::showpoint << std::setprecision(2)
		   << "workerID: " << workerID << std::endl
		   << "workerName: " << workerName << std::endl
		   << "workerType: " << workerType << std::endl
		   << "workingHoursInTheMonth: " << workingHoursInTheMonth << std::endl
		   << "fixedWorkingHoursPerDay: " << fixedWorkingHoursPerDay << std::endl
		   << "paymentForADay: " << paymentForADay << std::endl
		   << "overTimeHours: " << overTimeHours << std::endl
		   << "overTimePaymentPerHour: " << overTimePaymentPerHour << std::endl
		   << "workingDays: " << workingDays << "  days" << std::endl
		   << "salary: " << salary << std::endl
		   << std::endl;

	return buffer.str();
}