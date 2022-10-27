#include <iostream>
#include <cstdlib>

using namespace std;

/* Recursive Version */
int factorial_recursive(int n);


int main(int argc, char *argv[]) {
  
  if(argc > 1)
    cout << factorial_recursive(atol(argv[1])) << endl;
  else
    cout << "Factorial needs a parameter (n)." << endl;

  return 0;
}


/* Recursive Version */
int factorial_recursive(int n) {
  if(n == 0)
    return 1;
  else
    return factorial_recursive(n-1) * n;
}
