#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\nEnter two numbers (a and b): ";
    cin>>a>>b;
    if(a>b)
        cout<<"\na is greater than b";
    else if(b>a)
        cout<<"\nb is greater than a";
    else    
        cout<<"\na and b are equal";
}