/**
 * @file Supervisor.h
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Derived Class Declaration
 * 
 * Declares a Supervisor class
 */
#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

/**
 * A class to hold information about supervisors.
 *
 * @class Supervisor Supervisor.h "hw07-business-corp-employee-management-system-kylhbyas/Supervisor.h"
 * @brief Holds numSupervised and inherits ID, years, hourlyRate, and hoursWorked from the base Employee class.
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
  
 public:
/**
 * Constructor
 *
 * @pre Object declaration.
 * @post All data members are assigned the appropriate default values.
 * 
 */
  Supervisor();
  
/**
 * Paramaterized Constructor
 *
 * @param int ID employee id
 * @param int years Years employed
 * @param double hourlyRate Pay rate.
 * @param float hoursWorked Accumulated hours in pay period.
 * @post A correctly formed Supervisor object.
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
  
/**
 * Prints the Supervisor's information.
 *
 * @pre A correctly formed Supervisor object.
 * @post The Supervisor's information has been printed to the screen.
 * 
 */
  void print();

/**
 * Returns hourlyRate * hoursWorked as a double.
 *
 * @pre A correctly formed Supervisor object.
 * @return double The amount to be paid the Supervisor.
 * 
 */
  double calculatePay();
};
#endif //SUPERVISOR_H
