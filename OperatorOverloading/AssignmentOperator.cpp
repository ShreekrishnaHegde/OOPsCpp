/*
-------------------------------------------Assignment Operator Overloading-------------------------------------------
*/

#include <iostream>
using namespace std;

class Complex {
    private:
        int real, img; // real, imaginary

    public:
        // Parameterized Constructor
        Complex(int r, int i) : real(r), img(i) {}
        // Assignment operator overload
        Complex& operator=(const Complex& C){
            // Check for self-assignment
            if (this != &C) {
                real = C.real;
                img = C.img;
            }
            return *this;
        }
        // Function to print
        void print() const { cout << real << "+i" << img << endl; }
};

int main()
{
    // Assigning by overloading constructor
    Complex C1(2, 3), C2(4, 6);
  
    cout << "BEFORE OVERLOADING ASSIGNMENT OPERATOR" << endl;
    cout << "C1 complex number: ";
    C1.print();    
    cout << "C2 complex number: ";
    C2.print();     
  
    // Overloading assignment operator to copy values
    C1 = C2;
  
    cout << "AFTER OVERLOADING ASSIGNMENT OPERATOR" << endl;
    cout << "C1 complex number: ";
    C1.print();    
    cout << "C2 complex number: ";
    C2.print();
  
    return 0;
}

/*
The assignment operator,”=”, is the operator used for Assignment. It copies the right value into the left value. Assignment Operators are predefined to operate only on built-in Data types.

Assignment operator overloading is binary operator overloading.
Overloading assignment operator in C++ copies all values of one object to another object.
Only a non-static member function should be used to overload the assignment operator.



In C++, the compiler automatically provides a default assignment operator for classes. This operator performs a shallow copy of each member of the class from one object to another. This means that if we don’t explicitly overload the assignment operator, the compiler will still allow us to assign one object to another using the assignment operator (=), and it won’t generate an error.

So, when we should perform assignment operator overloading? when our class involves dynamic memory allocation (e.g., pointers) and we need to perform a deep copy to prevent issues like double deletion or data corruption.

The above example can be done by implementing methods or functions inside the class, but we choose operator overloading instead. The reason for this is, operator overloading gives the functionality to use the operator directly which makes code easy to understand, and even code size decreases because of it. Also, operator overloading does not affect the normal working of the operator but provides extra functionality to it.

Now, if the user wants to use the assignment operator “=” to assign the value of the class variable to another class variable then the user has to redefine the meaning of the assignment operator “=”.  Redefining the meaning of operators really does not change their original meaning, instead, they have been given additional meaning along with their existing ones.

Also, always check if the object is not being assigned to itself (e.g., if (this != &other)), as assigning an object to itself does not make sense and may cause runtime issues.
*/