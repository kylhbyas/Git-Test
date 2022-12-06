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
  int ID;
  int years;

 protected:
  double hourlyRate;
  float hoursWorked;
  
 public:
  virtual void print();
  virtual double calculatePay();
  void anniversary();
  Employee();
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};
#endif //EMPLOYEE_H
