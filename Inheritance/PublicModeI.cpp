/*
->When the access specifier for a base class is public, all public members of the base
become public members of the derived class, and all protected members of the base
become protected members of the derived class. In all cases, the base's private elements
remain private to the base and are not accessible by members of the derived class.
*/

#include <iostream>
using namespace std;
class base {
    int i, j;
    public:
        void set(int i, int j){ 
           this->i = i;
            this->j = j;
        }
        void show(){ 
            cout << i << " " << j << "\n"; 
        }
};
class derived : public base {
    int k;
    public:
        derived(int k){ 
            this->k=k; 
        }
        void showk(){ 
            cout << k << "\n"; 
        }
};
int main(){
    derived ob(3);
    ob.set(1, 2); // access member of base
    ob.show(); // access member of base
    ob.showk(); // uses member of derived class
    return 0;
}