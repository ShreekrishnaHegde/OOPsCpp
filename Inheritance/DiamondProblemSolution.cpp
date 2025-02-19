// C++ Program to illustrate the use of virtual inheritance
// to resolve the diamond problem in multiple inheritance
#include <iostream>
using namespace std;

// Base class
class Base {
    public:
        void fun() { 
            cout << "Base" << endl; 
        }
};

// Parent class 1 with virtual inheritance
class Parent1 : virtual public Base {
    public:
        void func() { 
            cout << "Parent1" << endl; 
        }
};

// Parent class 2 with virtual inheritance
class Parent2 : virtual public Base {
    public:
        void func() { 
            cout << "Parent2" << endl; 
        }

};

// Child class inheriting from both Parent1 and Parent2
class Child : public Parent1, public Parent2 {
    public:
        void fun() { 
            cout << "Child" << endl; 
        }
};

int main(){
    Child* obj = new Child();
    obj->fun(); // No ambiguity due to virtual inheritance
    Child obj1;
    obj1.fun();
    return 0;
}
