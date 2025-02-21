/*

->A default argument is a value provided for a parameter in a function declaration that is automatically 
    assigned by the compiler if the calling function doesn’t provide a value for those parameters. 
->If the value is passed for it, the default value is overridden by the passed value.

*/

#include <iostream>
using namespace std;

// Function with an argument with default value
void f(int a = 10) {
    cout << a << endl;
}

int main() {
      
      // Uses default argument
      f();
      // Uses passed value
      f(221);
  
    return 0;
}
