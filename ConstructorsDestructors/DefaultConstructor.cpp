/*
->A default constructor is a constructor that doesn’t take any argument. 
->It has no parameters. 
->It is also called a zero-argument constructor.
->Even if we do not define any constructor explicitly, the compiler will automatically provide a default constructor implicitly.


---------------------Application & Use of Default Constructor in C++---------------------
->Used when you need an object to be initialized with default values.
->It is automatically called when an object is created without any parameters.

--------------------------Advantages--------------------------
->Provides a way to initialize members with default values.
->Ensures objects are in a valid state when created.

----------------------Disadvantages--------------------------
->Might not be useful if an object requires specific initial values.
*/


// C++ program to illustrate the concept of default
// constructors
#include <iostream>
using namespace std;

class construct {
public:
	int a, b;
	// Default Constructor
	construct(){
		a = 10;
		b = 20;
	}
};

int main(){
	// Default constructor called automatically
	// when the object is created
	construct c;
	cout << "a: " << c.a << endl << "b: " << c.b;
	return 0;
}
