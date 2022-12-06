/**
 * @file main.cpp
 * @author Kyle Byassee
 * @date 2022-03-09
 * @brief Runs the EmployeeTests to verify class functionality.
 * 
 * Business Corp to make their Employee Management System much more personable by using classes with inheritance to hold employee information. Extra Credit Attempted.
 */


#include <iostream>
#include "Employee.h"
#include "Supervisor.h"
#include "Officer.h"

using namespace std;


/**
 * This function will call (in order): print(), calcuatePay(), anniversary(), and then print() again on Employee e.  This allows you to fully test all implemented methods.
 *
 * @param Employee & e Employee e of type Employee
 * @pre All data members and methods of the base and derived classes.
 * @return void 
 * @post Returns to main.
 * 
 */
void runEmployeeTests(Employee & e);

int main() {
  // Test default Employee constructor
  Employee defaultE;
  cout << "Testing Employee default constructor:" << endl;
  runEmployeeTests(defaultE);

  cout << endl << endl;

  // Test parameterized Employee constructor
  // ID: 1248, years: 2, hourlyRate: 15.23, hoursWorked: 3
  Employee parameterizedE(1248, 2, 15.23, 3);
  cout << "Testing Employee parameterized constructor:" << endl;
  runEmployeeTests(parameterizedE);

  cout << endl << endl;

  // Test default Supervisor constructor
  Supervisor defaultS;
  cout << "Testing Supervisor default constructor:" << endl;
  runEmployeeTests(defaultS);

  cout << endl << endl;

  // Test parameterized Supervisor constructor
  // ID: 422, years: 9, hourlyRate: 55.44, hoursWorked: 20, numSupervised 52
  Supervisor parameterizedS(422, 9, 55.44, 20, 52);
  cout << "Testing Supervisor parameterized constructor:" << endl;
  runEmployeeTests(parameterizedS);

  cout << endl << endl;

  // Test default Officer constructor
  Officer defaultO;
  cout << "Testing Officer default constructor:" << endl;
  runEmployeeTests(defaultO);

  cout << endl << endl;

  // Test parameterized Officer constructor
  // ID: 2, years = 94, hourlyRate: 10.859, hoursWorked: 2, evilness 9000.1
  Officer parameterizedO(2, 94, 10.859, 2, 9000.1);
  cout << "Testing Officer parameterized constructor:" << endl;
  runEmployeeTests(parameterizedO);

  cout << endl << endl;

  return 0;
}

void runEmployeeTests(Employee &e) {
  // TODO: implement this!
  cout << "Initial print():" << endl;
  e.print();

  cout << "Calculated Pay: " << e.calculatePay() << endl;
  cout << "Anniversary Test: ";
  e.anniversary();
  
  cout << "Final print():" << endl;
  e.print();
}
