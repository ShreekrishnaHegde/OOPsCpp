#include <iostream>
#include <math.h>
using namespace std;
void area(int a){
    cout<<"Area of square is: "<<a*a<<endl;
}
void area(int l,int b){
    cout<<"Area of rectangle is: "<<l*b<<endl;
}
void area(int a,int b,int c){
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle is: "<<area<<endl;
}

int main(){

    area(2);
    area(2,3);
    area(3,4,5);
    return 0;
}