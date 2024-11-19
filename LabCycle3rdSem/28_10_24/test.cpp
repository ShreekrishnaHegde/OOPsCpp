#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"Sum="<<(a+b)<<endl;
}
void add(double a,double b)
{
    cout<<"Sum="<<(a+b)<<endl;
}
int main()
{
    add(12,7);
    add(12.7,19.37);
    return 0;
}