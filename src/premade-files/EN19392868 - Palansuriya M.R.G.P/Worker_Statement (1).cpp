#include <iostream>
#include<string>
#include "Worker_Statement.h"
using namespace std;

int Worker_Statement::objectCount = 0;

Worker_Statement::Worker_Statement(string name, string worker, int wh, int fx, int dy, int ot, int hr ){
  WorkerName = name;
  WorkerType = worker;
  WorkingHoursInTheMonth = wh;
  FixWorkingHoursPerDay = fx;
  PaymentForADay = dy;
  OvertimeHours = ot;
  OvertimePaymentPerHour = hr;

  countObject();
}

 Worker_Statement::~Worker_Statement(){ 
   
}

void Worker_Statement::countObject(){ 
  objectCount++; 
  }
void Worker_Statement::calcWorkingdaysforthemonth(){
  float workingdays = (WorkingHoursInTheMonth/FixWorkingHoursPerDay);
  cout << "Working days for the month: " <<  workingdays <<" days"<< endl<< endl;  
} 
void Worker_Statement::calcSalary(){
  float Salary = ((WorkingHoursInTheMonth/FixWorkingHoursPerDay)*PaymentForADay)+(OvertimeHours*OvertimePaymentPerHour);
  cout << "Salary: Rs." <<  Salary <<" /="<< endl << endl<< endl<< endl;  

}
void Worker_Statement::displayworkerTypeDetails(){
  cout << "Name of the Worker: " <<  WorkerName << endl<< endl;
  cout << "Worker Type: " <<   WorkerType << endl;
  cout << "Working Hours in The Month: " <<  WorkingHoursInTheMonth <<" hours"<< endl;
  cout << "Fix Working Hours per Day: " <<  FixWorkingHoursPerDay <<" hours"<< endl;
  cout << "Payment For A Day: " <<"Rs."<<  PaymentForADay <<" /="<< endl;
  cout << "Overtime Hours: " <<  OvertimeHours <<" hours"<< endl;
  cout << "Overtime Payment per Hour: " <<"Rs."<<  OvertimePaymentPerHour <<" /="<< endl<< endl;
  
  calcWorkingdaysforthemonth();
  calcSalary();
}
//Getters
string Worker_Statement::getWorkerName(){
  return WorkerName; 
}
string Worker_Statement::getWorkerType(){
  return WorkerType; 
}
float Worker_Statement::getWorkingHoursInTheMonth(){
  return WorkingHoursInTheMonth; 
}
int Worker_Statement::getFixWorkingHoursPerDay(){
  return FixWorkingHoursPerDay; 
}
float Worker_Statement::getPaymentForADay(){
  return PaymentForADay; 
}
float Worker_Statement::getOvertimeHours(){
  return OvertimeHours; 
}
float Worker_Statement::getOvertimePaymentPerHour(){
  return OvertimePaymentPerHour; 
}

// Setters
void Worker_Statement::setWorkerName(string workerName) {
  this->WorkerName = workerName;
}
void Worker_Statement::setWorkerType(string workerType) {
  this->WorkerType = workerType;
}
void Worker_Statement::setWorkingHoursInTheMonth(int WorkingHoursInTheMonth){
  this->WorkingHoursInTheMonth = WorkingHoursInTheMonth;
}
void Worker_Statement::setFixWorkingHoursPerDay(int fixWorkingHoursPerDay){
  this->FixWorkingHoursPerDay = fixWorkingHoursPerDay;
}
void Worker_Statement::setPaymentForADay(int paymentForADay){
  this->PaymentForADay = paymentForADay;
}
void Worker_Statement::setOvertimeHours(int overtimeHours){
  this->OvertimeHours = overtimeHours;
}
void Worker_Statement::setOvertimePaymentPerHour(int overtimePaymentPerHour){
  this->OvertimePaymentPerHour = overtimePaymentPerHour;
}

