/**
 * @file Officer.h
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Derived Class Declaration
 * 
 * Declares an Officer class
 */
#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

/**
 * Holds information about officers.
 *
 * @class Officer Officer.h "Employees/Officer.h"
 * @brief Holds evilness and inherits ID, years, hourlyRate, and hoursWorked from the base Employee class.
 *
 */
class Officer : public Employee {
 private:
  double evilness;
  
 public:
/**
 * Constructor
 *
 * @pre Object declaration.
 * @post All data members are assigned the appropriate default values.
 * 
 */
  Officer();
  
/**
 * Paramaterized Constructor
 *
 * @param int ID employee id
 * @param int years Years employed
 * @param double hourlyRate Pay rate.
 * @param float hoursWorked Accumulated hours in pay period.
 * @post A correctly formed Officer object.
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
  
/**
 * Prints the Officer's information.
 *
 * @pre A correctly formed Employee object.
 * @post The Officer's information has been printed to the screen.
 * 
 */
  void print();
  
/**
 * Returns hourlyRate * hoursWorked as a double.
 *
 * @pre A correctly formed Officer object.
 * @return double The amount to be paid the Supervisor.
 * 
 */
  double calculatePay();
};
#endif //OFFICER_H
