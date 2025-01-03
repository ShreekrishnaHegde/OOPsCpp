#include <iostream>
using namespace std;

class Array{
    private:
            int* ptr;
            int size;
    public:
            Array(int* ptr=NULL,int size=0){
                this->size=size;
                this->ptr=NULL;
                if(size!=0){
                    this->ptr=new int[size];
                    for(int i=0;i<size;i++)
                        this->ptr[i]=ptr[i];
                }
            }
            void print() const{
                for(int i=0;i<this->size;i++)
                    cout<<ptr[i]<<" ";
                cout<<endl;
            }
            int& operator[](int index){
                if(index>=size){
                    cout<<"\nArray index out of bound, exiting.";
                    exit(0);
                }
                return ptr[index];
            }
};

int main(){
    
    int a[]={1,2,3,4,5};
    Array arr(a,4);
    arr[2]=10;
    arr.print();
    arr[10]=100;
    return 0;
}

/*
->The Subscript or Array Index Operator is denoted by ‘[]’. 
->This is a binary or n-ary operator and is represented in two parts:   
    Postfix/Primary Expression
    Expression
->The postfix expression, also known as the primary expression, is a pointer value such as array or identifiers and the 
    second expression is an integral value.
-> name[5] is same as [name]5 because both means *(name+5) or *(5+name), the point is one should be integer.

->Overloading of [] may be useful when we want to check for index out of bound.
->We must return by reference in function.

*/