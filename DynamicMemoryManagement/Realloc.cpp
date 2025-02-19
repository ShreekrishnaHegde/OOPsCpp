/*

The realloc() function reallocates memory that was previously allocated using malloc(), calloc() or realloc() 
function and yet not freed using the free() function.


--------------------------------------realloc() prototype--------------------------------------
void* realloc(void* ptr, size_t new_size);
The function is defined in <cstdlib> header file.


-------------------------------------realloc() Parameters-------------------------------------
ptr: A pointer to the memory block to be reallocated.
new_size: An unsigned integral value which represents the new size of the memory block in bytes.

---------------------------------realloc() Return value---------------------------------
The realloc() function returns:
    A pointer to the beginning of the reallocated memory block.
    Null pointer if allocation fails.

While reallocating memory, if there is not enough memory, then the old memory block is not freed and a null pointer is returned.

*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	float *ptr, *new_ptr;
	ptr = (float*) malloc(5*sizeof(float));
	if(ptr==NULL){
    	cout << "Memory Allocation Failed";
		exit(1);
	}
	/* Initializing memory block */
	for (int i=0; i<5; i++){
		ptr[i] = i+1;
	}
	/* reallocating memory */
	new_ptr = (float*) realloc(ptr, 10*sizeof(float));
	if(new_ptr==NULL){
		cout << "Memory Re-allocation Failed";
		exit(1);
	}
	/* Initializing re-allocated memory block */
	for (int i=5; i<10; i++){
		new_ptr[i] = i+1;
	}
	cout << "Printing Values" << endl;
	for (int i=0; i<10; i++){
		cout << new_ptr[i] << endl;
	}
	free(new_ptr);
	return 0;
}