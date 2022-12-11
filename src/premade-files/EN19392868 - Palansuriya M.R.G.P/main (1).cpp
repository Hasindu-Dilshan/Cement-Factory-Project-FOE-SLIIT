#include <iostream>
#include <string>
#include "Worker_Statement.h"
using namespace std;

int main(){
 
  Worker_Statement workerStatement1("Kalindu", "Permanent", 160, 8, 3000, 9, 1300);
  Worker_Statement workerStatement2("Manula", "Temporary", 171, 9, 2500, 11, 1100);


  cout<<"           INSEE Cement Plant"<<endl;
  cout<<"       Human Resource Department"<<endl<<endl<< endl;
  
  workerStatement1.displayworkerTypeDetails();
	workerStatement2.displayworkerTypeDetails();
  
}