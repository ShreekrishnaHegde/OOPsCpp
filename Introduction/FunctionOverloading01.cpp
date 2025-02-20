/*

->Function overloading is a feature of object-oriented programming where two or more functions can have 
    the same name but different parameters.

    
-------------------------------Advantages of function overloading--------------------------------
->The use of function overloading is to save memory space, consistency, and readability.
->It speeds up the execution of the program
->Code maintenance also becomes easy.
->Function overloading brings flexibility to code.
->The function can perform different operations and hence it eliminates the use of different function 
    names for the same kind of operations.

-------------------------------Disadvantages of function overloading--------------------------------
->Function declarations that differ only in the return type cannot be overloaded.
->Member function declarations with the same name and the same parameter types cannot be overloaded if 
    any of them is a static member function declaration.

*/


//This program overloads myfunc( ) by using different types of parameters.
#include <iostream>
using namespace std;

int myfunc(int i); // these differ in types of parameters
double myfunc(double i);

int main(){
    cout << myfunc(10) << " "<<endl; // calls myfunc(int i)
    cout << myfunc(5.4); // calls myfunc(double i)
    return 0;
}

double myfunc(double i){
    return i;
}

int myfunc(int i){
    return i;
}