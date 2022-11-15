<!--
   - @file README.md
   - @author Kyle Byassee
   - @date 2022-10-17
   - @brief ReadMe file
   - 
   - Basic readme for Doxygen Assignment
   -->
# HW07 - Business Corp Employee Management System

Name: Kyle Byassee

Date: 2022-03-14

This is a Doxygen project.

## Required Files
* Makefile
  *  controls compilation and cleans temporary and extraneous files.

* Employee.h
  *  Declares the base class.

* Supervisor.h
  *  Declares a derived class.

* Officer.h
  *  Declares another derived class from the base class.

* Employee.cpp
  *  Contains the definitions of the methods for the base class.

* Supervisor.cpp
  *  Contains the definitions of the methods for one of the derived classes.

* Officer.cpp
  *  Contains the definitions of the methods for another one of the derived classes.

* main.cpp
  *  Contains the main function as well as the runEmployeeTests function.


## Compilation Instructions
How do we compile your program?
    To compile type <make> which calls the Makefile.

## Program usage
How do we run your program?
* To run the program:
  * Compile the program.
  * type <./employee> to run the executable.

Does it expect any inputs?
* The program will prompt the user for information.

## Notes
* What is working?
  * The program is believed to be working as intended.

* What are the limitations of the program?
  * No limitations are immediately apparent.

* What design decisions did you make?
  * The derived classes call the base class's methods to minimize code duplication.
  * Consistency was the primary consideration at the time of writing.

* Note, Interesting point:
  * The runEmployeeTests function calls each object by reference to exercise the polymorphism trait of objects and by doing so reduces duplicate code.


:tada: :octocat: :tada:
