/*

->Parameterized Constructors make it possible to pass arguments to constructors. 
->Typically, these arguments help initialize an object when it is created. 
->Syntax of Parameterized Constructor
    className (parameters...) {
        // body
    }

-----------------------------Application & Use-----------------------------
Used when you need to initialize objects with specific values.
Allows passing parameters to set initial states of objects.

-----------------------------Advantages-----------------------------
->Provides flexibility to initialize objects with different values.
->Allows for more meaningful initialization.

---------------------------Disadvantages---------------------------
->If not combined with a default constructor, it might make it necessary to always provide parameters when creating objects.
*/
// CPP program to illustrate parameterized constructors
#include <iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        // Parameterized Constructor
        Point(int x1, int y1){
            x = x1;
            y = y1;
        }
        int getX() { 
            return x; 
        }
        int getY() { 
            return y; 
        }
};

int main(){
	// Constructor called
	Point p1(10, 15);
	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX()<< ", p1.y = " << p1.getY();
	return 0;
}
