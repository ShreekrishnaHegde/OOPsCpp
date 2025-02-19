/*

new                                                 | malloc() 
-----------------------------------------------------------------------------------------
new is an operator                                  | malloc() is a function
new calls constructors                              | malloc() does not call constructors
new returns the exact data type                     | malloc() returns void*
new never returns a NULL (will throw on failure)    | malloc() returns NULL
Reallocation of memory not handled by new           | Reallocation of memory can be handled by malloc
new allocates memory and calls the constructor      | malloc only allocates the memory


->The function malloc() in C++ is used to allocate the requested size of bytes and it returns a pointer to the first byte 
    of allocated memory. 
->It returns a null pointer if fails.
->Syntax:
    pointer_name = (cast-type*) malloc(size);
->The content of the newly allocated block of memory is not initialized, remaining with indeterminate values. 
->Malloc function is present in <cstdlib> header file.

--------------------------Return Value--------------------------
->void pointer is used to the uninitialized the initialized memory block that is allocated by the function
->null pointer if the allocation fails

->free() is used to deallocate the memory.
*/

// C++ program to demonstrate working of malloc()

// cstdlib is used to use malloc function
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	
	// malloc declaration/initializations
	int* ptr = (int*)malloc(sizeof(int));

	// return condition if the memory block is not
	// initialized
	if (ptr == NULL){
		cout << "Null pointer has been returned";
	}
	// condition printing the message if the memory is
	// initialized
	else{
        *ptr = 10;
		cout << "Memory has been allocated at address "<<ptr<< endl;
        cout<<" Value: "<<*ptr<<endl;
	}
	free(ptr);
	return 0;
}
