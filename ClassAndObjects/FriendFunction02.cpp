// C++ program to create a member function of another class
// as a friend function
#include <iostream>
using namespace std;

class Base; // forward definition needed

// another class in which function is declared
class anotherClass {
public:
    void memberFunction(Base& obj);
};

// base class for which friend is declared
class Base{
    private:
        int privateVar;

    protected:
        int protectedVar;

    public:
        Base(){
            privateVar = 10;
            protectedVar = 99;
        }
        // friend function declaration
        friend void anotherClass::memberFunction(Base&);
};

// friend function definition
void anotherClass::memberFunction(Base& obj){
    cout << "Private Variable: " << obj.privateVar<< endl;
    cout << "Protected Variable: " << obj.protectedVar;
}


int main(){
    Base object1;
    anotherClass object2;
    object2.memberFunction(object1);
    return 0;
}