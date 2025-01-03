#include <iostream>
using namespace std;


class MyNumber{
    private: 
            int data;
    public:
            MyNumber(int data=0){
                this->data=data;
            }
            MyNumber operator-(){
                return MyNumber(-this->data);
            }
            void display(){
                cout<<this->data<<"\n";
            }
};

int main(){
    MyNumber number(10);
    number.display();
    MyNumber flag=-number;
    flag.display();
    number.display();
    return 0;
}