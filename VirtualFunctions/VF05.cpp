/*
------------------------------------------Pure Virtual Functions------------------------------------------
The following program contains a simple example of a pure virtual function. The
base class, number, contains an integer called val, the function setval( ), and the pure
virtual function show( ). The derived classes hextype, dectype, and octtype inherit
number and redefine show( ) so that it outputs the value of val in each respective number
base (that is, hexadecimal, decimal, or octal).
*/
#include <iostream>
using namespace std;
class number{
    protected:
        int val;
    public:
        void setval(int i) { val = i; }
        // show() is a pure virtual function
        virtual void show() = 0;
};

class hextype : public number {
    public:
        void show(){
            cout << hex << val << "\n";
        }
};

class dectype : public number {
    public:
        void show() {
            cout << val << "\n";
        }
};

class octtype : public number {
    public:
        void show() {
            cout << oct << val << "\n";
        }
};

int main(){
    dectype d;
    hextype h;
    octtype o;
    d.setval(20);
    d.show(); // displays 20 - decimal
    h.setval(20);
    h.show(); // displays 14 - hexadecimal
    o.setval(20);
    o.show(); //displays 24 - octal
    return 0;
}

/*
->A pure virtual function is a virtual function that has no definition within the base class. 
->To declare a pure virtual function, use this general form:
    virtual type func-name(parameter-list) = 0;
->When a virtual function is made pure, any derived class must provide its own definition. 
    If the derived class fails to override the pure virtual function, a compile-time error will result.
->If we do not override the pure virtual function in the derived class, then the derived class also becomes an abstract class.

->A class that contains at least one pure virtual function is said to be abstract. 
->Because an abstract class contains one or more functions for which there is no definition (that is,
a pure virtual function), no objects of an abstract class may be created. Instead, an abstract
class constitutes an incomplete type that is used as a foundation for derived classes.
->Although you cannot create objects of an abstract class, you can create pointers and references to an abstract class. 
->This allows abstract classes to support run-time
polymorphism, which relies upon base-class pointers and references to select the proper virtual function.    
*/
