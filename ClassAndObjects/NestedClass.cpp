/*


Syntax:
    class OuterClass {
        // Members of the outer class

        public:
        // Nested class definition
        class InnerClass {
        // Members of the inner class
        };
    };

->A nested class is a class that is declared in another class. 
->The nested class is also a member variable of the enclosing class and has the same access rights as the other members. 
->However, the member functions of the enclosing class have no special access to the members of a nested class.
*/

#include<iostream>
using namespace std;
class Outer {
    public:
        class Inner {
            private:
                int num;
            public:
                void getdata(int n) {
                    num = n;
                }
                void putdata() {
                    cout<<"The number is "<<num;
                }
        };
};
int main() {
    cout<<"Nested classes in C++"<< endl;
    Outer :: Inner obj;
    obj.getdata(9);
    obj.putdata();
    return 0;
}