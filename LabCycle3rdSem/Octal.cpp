#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class Octal{
    private:
            int oct[15],count;
    public: 
            Octal(int);
            int operator+(int);
            friend ostream& operator<<(ostream&,Octal);
};

//Converts a decimal integer x to its octal equivalent.
Octal::Octal(int x){
    int i=0,rem,a[15];
    //Loop to divide x by 8 and store the remainder in array a
    while (x!=0){
        rem=x%8;
        x/=8;
        a[i++]=rem;
    }
    count=i;
    int n=count-1;
    //Stores the digits in reverse order in the oct array.
    for(i=0;i<count;i++){
        oct[i]=a[n];
        n--;
    }
}

//To add integer k to Octal number
int Octal::operator+(int k){
    int x=0,j=count-1;
    //Converts the octal number back to a decimal integer.
    for(int i=0;i<count;i++){
        x=x+oct[j]*pow(8,i);
        j--;
    }
    return x+k;
}
//To print the Octal Class object
ostream& operator<<(ostream& print,Octal O){
    for(int i=0;i<O.count;i++)
        print<<O.oct[i];
    return print;
}
int main(){
    int x,k,y=0;
    cout<<"\nEnter the integer value of x (in decimal)  : ";
    cin>>x;
    Octal h=Octal(x);
    cout<<"\nOctal Equivivalent of "<<x<<" is   : "<<h;
    cout<<"\nEnter the integer to be added to octal value   : ";
    cin>>k;
    y=h+k;
    cout<<"\n"<<h<<"(Octal) + "<<k<<" (Decimal)="<<y<<" (Decimal)";
    return 0;
}