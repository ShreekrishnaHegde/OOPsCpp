
#include <iostream>
using namespace std;
int main(){

    int a,b,c,big=0;
    cout<<"\nEnter three numbers: ";
    cin>>a>>b>>c;
    if(a>b && a>c)
        big=a;
    else if(b>a && b>c)
        big=b;
    else 
        big=c;
    cout<<"Greatest number is: "<<big<<endl;
    return 0;
}