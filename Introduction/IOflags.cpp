/*

--------------------------------------The standard manipulators--------------------------------------

dec: The dec manipulator of stream manipulators in C++ is used to turn on the dec flag
endl: The endl manipulator of stream manipulators in C++ is used to Output a newline character.
hex: The hex manipulator of stream manipulators in C++ is used to Turns on hex flag
setbase(int base): The setbase manipulator of stream manipulators in C++ is used to Set the number base to base
setfill(int ch): The setfill manipulator of stream manipulators in C++ is used to Set the fill character to ch
setiosflags(fmtflags f): The setiosflags manipulator of stream manipulators in C++ is used to Turns on the flag specified in f
setprecision(int p): The setprecision manipulator of stream manipulators in C++ is used to Set the number of digits of precision
setw(int w): The setw manipulator of stream manipulators in C++ is used to Set the field width to w
showbase: The showbase manipulator of stream manipulators in C++ is used to Turns on showbase flag
showpoint: The showpoint manipulator of stream manipulators in C++ is used to Turns on show point flag
showpos: The showpos manipulator of stream manipulators in C++ is used to Turns on showpos flag

*/


#include <iomanip> 
#include <iostream> 
using namespace std; 

void Example() 
{ 
	// performs ssame as setf( ) 
	cout << setiosflags(ios::showpos); 
	cout << 123<<"\n"; 
	
	// hexadecimal base (i.e., radix 16) 
	cout << hex << 100 << endl; 
	
	// Set the field width 
	cout << setfill('*') << setw(10) << 2343.0; 
} 

int main() 
{ 
	Example(); 
	return 0; 
} 
