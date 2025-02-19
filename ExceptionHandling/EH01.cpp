// A simple exception handling example.
#include <iostream>
using namespace std;
int main(){
    cout << "Start\n";
    try { // start a try block
        cout << "Inside try block\n";
        throw 100; // throw an error
        cout << "This will not execute";
    }
    catch (int i) { // catch an error
        cout << "Caught an exception -- value is: ";
        cout << i << "\n";
    }
    cout << "End";
    return 0;
}

/*
->Within the try block, only two of the three statements will execute: the first cout statement and the throw.
->Once an exception has been thrown, control passes to the catch expression and the try block
    is terminated. 
->That is, catch is not called. Rather, program execution is transferred to it. (The
    program's stack is automatically reset as needed to accomplish this.) Thus, the cout
    statement following the throw will never execute.

*/