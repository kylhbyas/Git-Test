#include <iostream>

using namespace std;

/* Iterative Version of Factorial */
int factorial_iterate(int n);


int main() {
  
  int n;
  
  // cout << "Please enter the factorial you wish to compute: ";
  // cin >> n;
  
  // if(n > 0)
  //   cout << factorial_iterate(n) << endl;
  // else
  //   cout << "Factorial must take a positive parameter.." << endl;
  
  return 0;
}


/* Iterative Version */
int factorial_iterate(int n)  {
  int factorial = 1;
  
  for(int i = 1; i <= n; i++) {
    factorial = factorial * i;
  }
  
  return factorial;
}
