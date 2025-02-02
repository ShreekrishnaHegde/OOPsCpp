/*
---------------------Virtual Constructor and Destructor in C++--------------------------------
*/
#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Base class constructor
    Base() { cout << "base constructor" << endl; }

    // Base class destructor
    virtual ~Base() { cout << "base destructor" << endl; }
};

// Derived class which is publicly inheriting the Base class
class Derived : public Base {
public:
    int* ptr;
    // Derived class constructor
    Derived()
    {
        ptr = new int[10];
        cout << "derived constructor" << endl;
    }

    // Derived class destructor
    ~Derived()
    {
        delete ptr;
        cout << "derived destructor" << endl;
    }
};

int main()
{
    // Creating a new Derived object and assigning its
    // address to a Base class pointer
    Base* ptr = (Base*)new Derived();

    // Deleting the created object through the Base class
    // pointer. As the Base class destructor is not virtual,
    // it will not call the Derived class destructor. This
    // can lead to resource leak if the Derived class was
    // holding any resources
    delete ptr;

    return 0;
}
/*
->In C++, we CANNOT make a constructor virtual. The reason is that C++ is a statically typed language, so the concept 
    of a virtual constructor is a contradiction because the compiler needs to know the exact type at compile time 
    to allocate the correct amount of memory and initialize the object correctly.
->If your class has one or more virtual functions that are derived by their child classes and you are using pointers to base class 
    to manage the objects, then you need to implement a virtual destructor so that the relevant version of the destructor 
    is called when the object is deleted.
*/