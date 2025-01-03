#include <iostream>
using namespace std;

class Complex{
    private:
            int real,img;
    public:
            //Constructor with default values
            Complex(int real=0,int img=0){
                this->img=img;
                this->real=real;
            }
            //Operator Overloading Function
            /*
            ->operator+ is the name of the function
            */
            Complex operator+(Complex const& obj){
                Complex result;
                result.img=real+obj.img;
                result.real=real+obj.real;
                return result;
            }
            void display(){
                cout<<"\n"<<real<<" + "<<img<<"i"<<"\n";
            }
};

int main(){

    Complex c1(10,20),c2(1,1);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}