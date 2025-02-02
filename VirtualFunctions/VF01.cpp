/*
-------------------------------Calling a Virtual Function Through a Base Class Pointer--------------------------------
*/
#include <iostream>
using namespace std;
class base {
    public:
        virtual void vfunc(){
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
    p->vfunc(); // access derived2's vfunc()
    return 0;
}

/*
->Inside base, the virtual function vfunc( ) is declared.
->base is inherited by both derived1 and derived2. Inside each class definition, vfunc( ) is redefined relative to that class.
->Next, p is assigned the address of b, and vfunc( ) is called via p. Since p is pointing
    to an object of type base, that version of vfunc( ) is executed. 
->Next, p is set to the address of d1, and again vfunc( ) is called by using p. This time p points to an object
    of type derived1. This causes derived1::vfunc( ) to be executed. 
->Finally, p is assigned the address of d2, and p >vfunc( ) causes the version of vfunc( ) redefined inside
    derived2 to be executed. 
->The key point here is that the kind of object to which p points determines which version of vfunc( ) is executed. 
->Further, this determination is made at run time, and this process forms the basis for run-time polymorphism.
*/