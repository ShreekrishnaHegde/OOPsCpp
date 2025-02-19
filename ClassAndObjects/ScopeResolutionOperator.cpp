/*
Uses of the scope resolution Operator
It is used to access the hidden variables or member functions of a program.
It defines the member function outside of the class using the scope resolution.
It is used to access the static variable and static function of a class.
The scope resolution operator is used to override function in the Inheritance.
*/

#include <iostream>
using namespace std;

// Global x
int x = 3;
int main(){
    // Local x
    int x = 10;
    // Printing the global x
    cout << ::x;
    return 0;
}