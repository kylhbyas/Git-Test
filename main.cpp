/**
 * @file main.cpp
 * @author Kyle Byassee
 * @date 2022-08-25
 * @brief Hello world program
 * 
 * A program for testing
 */


#include <iostream>

using namespace std;


/**
 * Sums ints from 1 to n
 *
 * @param int n User prompted int
 * @return int Sum from 1 to n
 * @post Printed sum
 * 
 */
int sum(int n);


/**
 * Multiplies ints from 1 to n
 *
 * @param int n User prompted int
 * @return int Product from 1 to n
 * @post Printed product
 * 
 */
int product(int n);

int main() {
  cout << "Hello World!" << endl;

  int n = 0;
  cout << "Enter a number: ";
  cin >> n;

  cout << "Sum: " << sum(n) << endl;
  cout << "Product: " << product(n) << endl;
  
  return 0;
}

int sum(int n) {
  int sum = n;
  
  for(int i = (n - 1); i > 0; i--) {
    sum += i;
  }
  
  return sum;
}

int product(int n) {
  int product = n;

  for(int i = (n - 1); i > 0; i--) {
    product *= i;
  }

  return product;
}
