/*
->In C++, the [ ] is considered a binary operator when you are overloading it.

*/
#include <cstdlib>
#include <iostream>
using namespace std;

// A class to represent an integer array
class Array {
    private:
        int* ptr;
        int size;
    public:
        Array(int*, int);
        // Overloading [] operator to access elements in array
        // style
        int& operator[](int);
        const int& operator[](int) const;
        // Utility function to print contents
        void print() const;
};
// Implementation of non-const [] operator. This function
// must return a reference as array element can be put on
// the left side
int& Array::operator[](int index)
{
    if (index >= size) {
        cout << "Array index out of bound, exiting";
        exit(0);
    }
    return ptr[index];
}
// Implementation of const [] operator. This function allows
// read-only access
const int& Array::operator[](int index) const
{
    if (index >= size) {
        cout << "Array index out of bound, exiting";
        exit(0);
    }
    return ptr[index];
}

// Constructor for array class
Array::Array(int* p = NULL, int s = 0)
    : size(s)
    , ptr(NULL)
{
    if (s != 0) {
        ptr = new int[s];
        for (int i = 0; i < s; i++)
            ptr[i] = p[i];
    }
}

// Utility function to print contents
void Array::print() const{
    for (int i = 0; i < size; i++)
        cout << ptr[i] << " ";
    cout << endl;
}

// Driver program to test above methods
int main()
{
    int a[] = { 1, 2, 4, 5 };
    Array arr1(a, 4);
    arr1[2] = 6;
    arr1.print();

    // Uncommenting the next line will cause an error
    // because the index is out of bounds arr1[8] = 6;
    const Array arr2(a, 4);
    cout << arr2[2] << endl;
    // Uncommenting the next line will cause an error
    // because arr2 is const and cannot modify its elements
    // arr2[2] = 7;
    return 0;
}

/*
->Overloading both const and non-const versions of the subscript operator ([]) ensures that elements can be accessed 
    in a read-only manner when the object is const, preventing unintended modifications to const data types.
->The first const keyword (before the method body) ensures that the returned reference to an integer cannot be modified.
->The second const keyword (after the method body) ensures that the method does not modify any member variables of the class 
    and can be called on constant objects.
*/