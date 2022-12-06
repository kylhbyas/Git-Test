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
  void print() override;
  double calculatePay() override;
  Supervisor();
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};
#endif //SUPERVISOR_H
