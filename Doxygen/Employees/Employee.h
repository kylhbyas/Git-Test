/**
 * @file Employee.h
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Base Class Declaration
 * 
 * Declares a base Employee class
 */
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

/**
 * A class to hold information about employees.
 *
 * @class Employee Employee.h "hw07-business-corp-employee-management-system-kylhbyas/Employee.h"
 * @brief Holds ID, years, hourlyRate, and hoursWorked.
 *
 */
class Employee {
 private:
  int ID; // employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
  
 public:
/**
 * Constructor
 *
 * @pre Object declaration.
 * @post All data members are assigned the appropriate default values.
 * 
 */
  Employee();
  
/**
 * Paramaterized Constructor
 *
 * @param int ID employee ID
 * @param int years Years employed
 * @param double hourlyRate Pay rate.
 * @param float hoursWorked Accumulated hours in pay period.
 * @post A correctly formed Employee object.
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
  
/**
 * Prints the Employee's information.
 *
 * @pre A correctly formed Employee object.
 * @return virtual Implemented in derived classes.
 * 
 */
  virtual void print();
  
/**
 * Updates years employed, hourlyRate, and Congragulates the Employee
 *
 * @pre A correctly formed Employee object.
 * @post The appropriate private and protected members have been updated.
 * 
 */
  void anniversary();

/**
 * Returns hourlyRate * hoursWorked as a double.
 *
 * @pre A correctly formed Employee object.
 * @return virtual Implemented in derived classes.
 * 
 */
  virtual double calculatePay();
};
#endif //EMPLOYEE_H
