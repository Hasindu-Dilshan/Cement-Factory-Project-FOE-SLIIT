#ifndef class_2 
#define class_2
#include <string>
using namespace std;

class Worker_Statement {
private:
  string WorkerName;
  string WorkerType;
  int WorkingHoursInTheMonth;
  int FixWorkingHoursPerDay;
  int PaymentForADay;
  int OvertimeHours;
  int OvertimePaymentPerHour;
  static int objectCount; 

public:
  Worker_Statement(){}
  
  Worker_Statement(string name, string worker, int wh, int fx, int dy, int ot, int hr );

  ~Worker_Statement();

  void countObject();

  
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
  void setFixWorkingHoursPerDay(int fixWorkingHoursPerDay);
  void setPaymentForADay(int PpymentForADay);
  void setOvertimeHours(int overtimeHours);
  void setOvertimePaymentPerHour(int overtimePaymentPerHour);

}; 
#endif