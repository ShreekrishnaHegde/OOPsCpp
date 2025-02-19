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
        Base() { 
            cout << "Base class constructor" << endl; 
        }
};

// Parent class 1 with virtual inheritance
class Parent1 : virtual public Base {
    public:
        Parent1() { 
            cout << "Parent1 class constructor" << endl; 
        }
};

// Parent class 2 with virtual inheritance
class Parent2 : virtual public Base {
    public:
        Parent2() { 
            cout << "Parent2 class constructor" << endl;
        }

};

// Child class inheriting from both Parent1 and Parent2
class Child : public Parent1, public Parent2 {
    public:
        void fun() { 
            cout << "Child" << endl; 
        }
        Child() { 
            cout << "Child class constructor" << endl;
        }
};

int main(){
    Child* obj = new Child();
    obj->fun(); // No ambiguity due to virtual inheritance
    Child obj1;
    obj1.fun();
    return 0;
}
