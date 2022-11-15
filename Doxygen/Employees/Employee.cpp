/**
 * @file Employee.cpp
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Defines the methods in the base Employee class.
 * 
 * These methods can be called by the base class or by one of the derived classes.
 */
#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee() {
  //ID = years = hoursWorked = hourlyRate = -1;
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

void Employee::print() {
  // cout << "Printing information for employee " << ID << ":\n Years Employed: " << years
  //      << "\n Hourly Rate: " << hourlyRate << "\n Hours Worked: " << hoursWorked
  //      << endl;
  cout << "Printing information for employee " << ID << ':' << endl
       << " Years Employed: " << years << endl
       << " Hourly Rate: " << hourlyRate << endl
       << " Hours Worked: " << hoursWorked << endl;
}

void Employee::anniversary() {
  years++;
  hourlyRate = hourlyRate + hourlyRate * .002; // 0.2% increase
  cout << "Congratulations to employee " << ID << " on " << years << " year(s) at company!" << endl;
}

double Employee::calculatePay() {
  return hourlyRate * hoursWorked;
}
