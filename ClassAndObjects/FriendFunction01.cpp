/*

A friend function can be:

A global function
A member function of another class


Syntax:

friend return_type function_name (arguments);    // for a global function
            or
friend return_type class_name::function_name (arguments);    // for a member function of another class

------------------------------------Features of Friend Functions------------------------------------
->A friend function is a special function in C++ that in spite of not being a member function of a class,
    has the privilege to access the private and protected data of a class.
->A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” 
    inside the class. By declaring a function as a friend, all the access permissions are given to the function.
->The keyword “friend” is placed only in the function declaration of the friend function.
->Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.
->Friendship is not inherited. 
    If class B is a friend of class A, and class C is derived from class A, then class C doesn’t become a friend of class B.
->We can declare friend class or function anywhere in the base class body whether its private, protected or public block. It works all the same.



------------------------------------Advantages of Friend Functions------------------------------------
->A friend function is able to access members without the need of inheriting the class.
->The friend function acts as a bridge between two classes by accessing their private data.
->It can be used to increase the versatility of overloaded operators.
->It can be declared either in the public or private or protected part of the class.

------------------------------------Disadvantages of Friend Functions ------------------------------------
->Friend functions have access to private members of a class from outside the class which violates the law of data hiding.
->Friend functions cannot do any run-time polymorphism in their members
*/




// C++ program to create a global function as a friend
// function of some class
#include <iostream>
using namespace std;

class Base{
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        Base(){
            privateVar = 10;
            protectedVar = 20;
        }
        friend void friendFunction(Base& obj);
};

void friendFunction(Base& obj){
    cout << "Private Variable: " << obj.privateVar<< endl;
    cout << "Protected Variable: " << obj.protectedVar;
}

int main(){
    Base object1;
    friendFunction(object1);
    return 0;
}