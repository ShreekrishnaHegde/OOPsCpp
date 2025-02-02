#include <iostream>
using namespace std;

class SmartPointer{
    private:
            int* ptr;
    public://explicit prevents implicit type conversions, ensuring safety when initializing the object.
            explicit SmartPointer(int* ptr=NULL){
                this->ptr=ptr;
            }
            ~SmartPointer(){
                delete ptr;
            }
            int& operator*(){
                return *ptr;
            }
};

int main(){

    SmartPointer ptr(new int());
    *ptr=100;
    cout<<*ptr;
    return 0;
}

/*
------------------Difference between Pointer and Smart Pointer---------------------
->Pointer is not destroyed in any form when it goes out of its scope
->They are very labor-centric/manual.
->A pointer is a variable that maintains a memory address as well as data type information about that memory location. 
    A pointer is a variable that points to something in memory.

->It destroys itself when it goes out of its scope
->They are automatic/pre-programmed in nature.
->It’s a pointer-wrapping stack-allocated object. Smart pointers, in plain terms, are classes that wrap a pointer, or scoped pointers.
*/