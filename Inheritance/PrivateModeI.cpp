/*
When a base class' access specifier is private, public and protected members of the base
become private members of the derived class. This means that they are still accessible by
members of the derived class but cannot be accessed by parts of your program that are
not members of either the base or derived class
*/

// This program won't compile.
#include <iostream>
using namespace std;
class base {
    int i, j;
    public:
        void set(int i, int j){ 
            this->i = i;
            this->j = j;
        }
        void show() { 
            cout << i << " " << j << "\n";
        }
};
// Public elements of base are private in derived.
class derived : private base {
    int k;
    public:
        derived(int k){ 
            this->k=k; 
        }
        void showk() { 
            cout << k << "\n"; 
        }
};
int main(){
    derived ob(3);
    ob.set(1, 2); // error, can't access set()
    ob.show(); // error, can't access show()
    ob.showk(); // uses member of derived class
    return 0;
}