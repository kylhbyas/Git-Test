/**
 * @file Employee.cpp
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Defines the methods in the base Employee class.
 * 
 * These methods can be called by the base class or by one of the derived classes.
 */


#include <iostream>
#include "Employee.h"

using namespace std;

void Employee::print() {
  cout << "Printing information for employee " << ID << ':' << endl;
  cout << " Years Employed: " << years << endl;
  cout << " Hourly Rate: " << hourlyRate << endl;
  cout << " Hours Worked: " << hoursWorked << endl;
}

double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}

void Employee::anniversary() {
  years++;
  hourlyRate += (hourlyRate * 0.002);  // 0.2% increase

  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!" << endl;
}

Employee::Employee() {
  ID = -1;
  years = -1;
  hourlyRate = -1;
  hoursWorked = -1;
}

Employee::Employee(int ID, int years, double hourlyRate, float hoursWorked) {
  this->ID = ID;
  this->years = years;
  this->hourlyRate = hourlyRate;
  this->hoursWorked = hoursWorked;
}
