/*
C++ provides inline functions to reduce the function call overhead. An inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of the inline function call. This substitution is performed by the C++ compiler at compile time. An inline function may increase efficiency if it is small.


Syntax:

inline return-type function-name(parameters)
{
    // function code
}  


*/

#include <iostream>
using namespace std;

inline int max(int a, int b){
    return a>b ? a : b;
}
int main(){
    cout << max(10, 20);
    cout << " " << max(99, 88);
    return 0;
}
