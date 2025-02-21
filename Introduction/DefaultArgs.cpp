/*

->A default argument is a value provided for a parameter in a function declaration that is automatically 
    assigned by the compiler if the calling function doesn’t provide a value for those parameters. 
->If the value is passed for it, the default value is overridden by the passed value.


---------------Rules for Default Arguments----------------
1.Default Values Must Be Specified in Function Declarations
    The default values for parameters must be specified in the function declaration (or prototype). 
    If a function is declared and defined separately, the default values must be in the declaration, not in definition.
2. Default Arguments Cannot Be Modified
3. Default Arguments Must Be Provided from Right to Left
    In a function with multiple parameters, default values must be provided from the rightmost parameter to the left. 
    If a parameter has a default argument, all parameters to its right must also have default values.
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
