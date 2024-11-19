#include <iostream>
using namespace std;

void sum(int a,int b);
int main(){
    int a,b;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    sum(a,b);
    return 0;
}
void sum(int a,int b){
    cout<<"\nSum is: "<<a+b;
}