#include <iostream>
using namespace std;

// function to throw division by zero exception
void divide(int num, int den) {
    if (den == 0) {
        throw runtime_error("Division by zero error");
    }
    cout << "Result of division: " << num / den << endl;
}

int main() {
    int numerator = 5, denominator = 0;

    try {
        divide(numerator, denominator);
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}