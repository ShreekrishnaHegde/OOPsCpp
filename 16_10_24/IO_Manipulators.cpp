#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a = 123;
    int b = -123;
    double n = 123.4567;
    cout << "Positive number with showpos: " << showpos << a << endl;
    cout << "Negative number with showpos: " << showpos << b << endl;
    cout << "Left-justified output: " << left << setw(20) << "Hello" << endl;
    cout << "Right-justified output: " << right << setw(20) << "Hello" << endl;
    cout << "Fixed-point notation: " << fixed << setprecision(2) << n << endl;
    return 0;
}