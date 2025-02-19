/*
A friend class can access private and protected members of other classes in which it is declared as a friend. 

Syntax:
friend class class_name;    // declared in the base class
*/

// C++ Program to demonstrate the
// functioning of a friend class
#include <iostream>
using namespace std;

class A{
private:
    int private_variable;

protected:
    int protected_variable;

public:
    A(){
        private_variable = 10;
        protected_variable = 99;
    }

    // friend class declaration
    friend class B;
};

// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class B {
public:
    void display(A& t){
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};

// Driver code
int main(){
    A g;
    B fri;
    fri.display(g);
    return 0;
}