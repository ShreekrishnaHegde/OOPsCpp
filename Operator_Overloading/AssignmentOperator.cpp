#include <iostream>
using namespace std;

class Complex{
    private:
            int real,img;
    public:
            Complex(int real=0,int img=0){
                this->img=img;
                this->real=real;
            }
            // Complex& operator=(const Complex& C){
            //     if(this !=&C){
            //         this->real=C.real;
            //         this->img=C.img;
            //     }
            //     return *this;
            // }
            void display(){
                cout<<"\n"<<real<<" +i "<<img;
            }
            Complex operator+(Complex const& obj){
                Complex result;
                result.img=real+obj.img;
                result.real=real+obj.real;
                return result;
            }
};

int main(){

    Complex c1(10,20),c2(1,2);
    c1=c2;
    cout<<"\nBefore Overloading: ";
    cout<<"\nC1: ";
    c1.display();
    cout<<"\nC2: ";
    c2.display();
    c1=c1+c2;
    cout<<"\nAfter Overloading: ";
    cout<<"\nC1: ";
    c1.display();
    cout<<"\nC2: ";
    c2.display();
    return 0;
}

/*
->The assignment operator copies the right value into the left value. 
->Assignment operator overloading is binary operator overloading.
->Overloading assignment operator in C++ copies all values of one object to another object.
->Only a non-static member function should be used to overload the assignment operator.
->In C++, the compiler automatically provides a default assignment operator for classes. 
->This operator performs a shallow copy of each member of the class from one object to another. 
    (Shallow Copy reflects changes made to the new/copied object in the original object.)
    (Deep copy doesn’t reflect changes made to the new/copied object in the original object.)
->

*/