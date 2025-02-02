/*
----------------------------------------------Virtual Functions Are Hierarchical----------------------------------------------
*/
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
    // vfunc() not overridden by derived2, base's is used
};

int main(){
    base *p, b;
    derived1 d1;
    derived2 d2;
    // point to base
    p = &b;
    p->vfunc(); // access base's vfunc()
    // point to derived1
    p = &d1;
    p->vfunc(); // access derived1's vfunc()
    // point to derived2
    p = &d2;
    p->vfunc(); // use base's vfunc()
    return 0;
}

/*
->When a derived class fails to override a virtual function, then when an object of that
    derived class accesses that function, the function defined by the base class is used.
->Because derived2 does not override vfunc( ), the function defined by base is used
    when vfunc( ) is referenced relative to objects of type derived2.
->Because inheritance is hierarchical in C++, it makes sense that virtual functions are also
    hierarchical. This means that when a derived class fails to override a virtual function,
    the first redefinition found in reverse order of derivation is used. 
*/