/**
 * @file Supervisor.cpp
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Defines the methods of the Supervisor class.
 * 
 * These methods are unique to the Supervisor class and in some cases overrides the base class methods.
 */


#include <iostream>
#include "Employee.h"
#include "Supervisor.h"

using namespace std;

void Supervisor::print() {
  Employee::print();

  cout << " Number Supervised: " << numSupervised << endl;
}

double Supervisor::calculatePay() {
  double pay = Employee::calculatePay();

  pay += (Employee::calculatePay() * numSupervised) * 0.01;

  return pay;
}

Supervisor::Supervisor() : Employee() {
  numSupervised = -1;
}

Supervisor::Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised) : Employee(ID, years, hourlyRate, hoursWorked) {
  this->numSupervised = numSupervised;
}
