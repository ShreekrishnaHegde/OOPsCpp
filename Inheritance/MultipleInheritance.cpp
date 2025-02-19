/*

Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

Syntax

class subclass_name : access_mode base_class1, access_mode base_class2, ....
{
  // body of subclass
};
Here, the number of base classes will be separated by a comma (‘, ‘) and the access mode for every base class must be specified and can be different.


*/

// C++ program to illustrate the multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
    Vehicle() { 
        cout << "This is a Vehicle\n"; 
    }
};

// second base class
class FourWheeler {
public:
    FourWheeler() { 
        cout << "This is a 4 Wheeler\n"; 
    }
};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
  public:
    Car() { 
        cout << "This 4 Wheeler Vehical is a Car\n"; 
    }
};

// main function
int main(){
    // Creating object of sub class will
    // invoke the constructor of base classes.
    Car obj;
    return 0;
}
