/**
 * @file Officer.cpp
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Defines the methods for the Officer class.
 * 
 * These methods are unique to the Officer class and in some cases overrides the methods of the base Employee class.
 */
#include "Officer.h"
#include <iostream>

using namespace std;

Officer::Officer() : Employee() {
  evilness = 500;
}

Officer::Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->evilness = evilness;
}

void Officer::print() {
  Employee::print();
  cout << " Evilness: " << evilness << endl;
}

double Officer::calculatePay() {
  return (hourlyRate + evilness) * hoursWorked;
}
