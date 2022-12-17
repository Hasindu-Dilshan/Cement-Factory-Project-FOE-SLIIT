#include <iostream>
#include <string>
#include <iomanip>

#include "Worker.hpp"

using namespace std;

// Default Constructor
Worker::Worker(){

}

// Overloaded Constructor
Worker::Worker(int workerID, string WorkerName, string WorkerType, int WorkingHoursInTheMonth, int FixWorkingHoursPerDay, int PaymentForADay, int OvertimeHours, int OvertimePaymentPerHour){

	this->workerID = workerID;
	this-> WorkerName = WorkerName;
	this-> WorkerType = WorkerType;
	this-> WorkingHoursInTheMonth = WorkingHoursInTheMonth;
	this-> FixWorkingHoursPerDay = FixWorkingHoursPerDay;
	this-> PaymentForADay = PaymentForADay;
	this-> OvertimeHours = OvertimeHours;
	this-> OvertimePaymentPerHour = OvertimePaymentPerHour;

}

// Destructor
Worker::~Worker(){
	cout << "[+] Worker id:" << workerID << " " << WorkerName << " Removed Successfully!" << endl << endl;
}

void Worker::calcWorkingdaysforthemonth(){
  float workingdays = (WorkingHoursInTheMonth / FixWorkingHoursPerDay);
  cout << "[*] Working days for the month: " <<  workingdays <<"  days" << endl;  
} 
void Worker::calcSalary(){
  float Salary = ((WorkingHoursInTheMonth/FixWorkingHoursPerDay)*PaymentForADay)+(OvertimeHours*OvertimePaymentPerHour);
  cout << "[*] Salary: Rs." <<  Salary << " /=" << endl;  

}
void Worker::displayworkerTypeDetails(){
	int max_width = 33;

  cout << setw(max_width) << "Name of the Worker: " <<  WorkerName << endl;
  cout << setw(max_width) << "Worker Type: " <<   WorkerType << endl;
  cout << setw(max_width) << "Working Hours in The Month: " << WorkingHoursInTheMonth << " hours" << endl;
  cout << setw(max_width) << "Fix Working Hours per Day: " << FixWorkingHoursPerDay << " hours" << endl;
  cout << setw(max_width) << "Payment For A Day: " << "Rs." << PaymentForADay << " /=" << endl;
  cout << setw(max_width) << "Overtime Hours: " <<  OvertimeHours << " hours" << endl;
  cout << setw(max_width) << "Overtime Payment per Hour: " << "Rs." <<  OvertimePaymentPerHour << " /=" << endl;
	cout << endl;
  
  calcWorkingdaysforthemonth();
  calcSalary();
}

//Getters
string Worker::getWorkerName(){
  return WorkerName; 
}
string Worker::getWorkerType(){
  return WorkerType; 
}
float Worker::getWorkingHoursInTheMonth(){
  return WorkingHoursInTheMonth; 
}
int Worker::getFixWorkingHoursPerDay(){
  return FixWorkingHoursPerDay; 
}
float Worker::getPaymentForADay(){
  return PaymentForADay; 
}
float Worker::getOvertimeHours(){
  return OvertimeHours; 
}
float Worker::getOvertimePaymentPerHour(){
  return OvertimePaymentPerHour; 
}

// Setters
void Worker::setWorkerName(string workerName) {
  this->WorkerName = workerName;
}
void Worker::setWorkerType(string workerType) {
  this->WorkerType = workerType;
}
void Worker::setWorkingHoursInTheMonth(int WorkingHoursInTheMonth){
  this->WorkingHoursInTheMonth = WorkingHoursInTheMonth;
}
void Worker::setFixWorkingHoursPerDay(int fixWorkingHoursPerDay){
  this->FixWorkingHoursPerDay = fixWorkingHoursPerDay;
}
void Worker::setPaymentForADay(int paymentForADay){
  this->PaymentForADay = paymentForADay;
}
void Worker::setOvertimeHours(int overtimeHours){
  this->OvertimeHours = overtimeHours;
}
void Worker::setOvertimePaymentPerHour(int overtimePaymentPerHour){
  this->OvertimePaymentPerHour = overtimePaymentPerHour;
}