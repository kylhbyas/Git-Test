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


/**
 * Holds information about officers.
 *
 * @class Officer Officer.h "hw07-business-corp-employee-management-system-kylhbyas/Officer.h"
 * @brief Holds evilness and inherits ID, years, hourlyRate, and hoursWorked from the base Employee class.
 *
 */
class Officer : public Employee {
 private:
  double evilness;
  
 public:
  void print() override;
  double calculatePay() override;
  Officer();
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};
#endif //OFFICER_H
