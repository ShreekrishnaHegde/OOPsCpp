/*
Calling a Virtual Function Through a Base Class Reference
*/
/* Here, a base class reference is used to access
a virtual function. */
#include <iostream>
using namespace std;
class base {
    public:
        virtual void vfunc() {
            cout << "This is base's vfunc().\n";
        }
};
class derived1 : public base {
    public:
        void vfunc() {
            cout << "This is derived1's vfunc().\n";
        }
};
class derived2 : public base {
    public:
        void vfunc() {
            cout << "This is derived2's vfunc().\n";
        }
};
// Use a base class reference parameter.
void f(base &r) {
    r.vfunc();
}
int main(){
    base b;
    derived1 d1;
    derived2 d2;
    f(b); // pass a base object to f()
    f(d1); // pass a derived1 object to f()
    f(d2); // pass a derived2 object to f()
    return 0;
}
/*
->A reference is an implicit pointer.
->Thus, a base-class reference can be used to refer to an object of the base class or any
object derived from that base. When a virtual function is called through a base-class
reference, the version of the function executed is determined by the object being
referred to at the time of the call.
The most common situation in which a virtual function is invoked through a base
class reference is when the reference is a function parameter.

The function f( ) defines a reference parameter of type base. Inside main( ), the function
is called using objects of type base, derived1, and derived2. Inside f( ), the specific
version of vfunc( ) that is called is determined by the type of object being referenced
when the function is called.

*/