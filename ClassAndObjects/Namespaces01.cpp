/*
--------------------------Namesapces--------------------------------
->Purpose of namespaces is to localize the names of identifiers to avoid name collisions.
->The namespace keyword allows you to partition the global namespace by creating
    a declarative region. In essence, a namespace defines a scope. 
->Syntax:
    namespace name {
    // declarations
    }
->Anything defined within a namespace statement is within the scope of that namespace.

->To call the namespace-enabled version of either function or variable, prepend the namespace name as follows:
    namespace_name::code;  // code could be variable , function or class.


-----------------------------Using Directive--------------------------------
->You can also avoid prepending of namespaces with the using namespace directive. 
->This directive tells the compiler that the subsequent code is making use of names in the specified namespace. 

Advantage of Namespace 
->To avoid name collision.
    Example, you might be writing some code that has a function called xyz() and there is another library available 
    which is also having same function xyz(). Now the compiler has no way of knowing which version of xyz() function 
    you are referring to within your code.
    A namespace is designed to overcome this difficulty and is used as additional information to differentiate similar functions, 
    classes, variables etc. with the same name available in different libraries. 
    The best example of namespace scope is the C++ standard library (std) where all the classes, methods and templates are declared. 
    Hence while writing a C++ program we usually include the directive using namespace std;
*/
#include <iostream>
using namespace std;

// first name space
namespace first_space{
  void func(){
     cout<<"Inside first_space" << endl;
  }
}

// second name space
namespace second_space{
  void func(){
     cout<<"Inside second_space" << endl;
  }
}

int main (){
   // This calls function from first name space.
  first_space::func();
  second_space::func();
  return 0;
}
