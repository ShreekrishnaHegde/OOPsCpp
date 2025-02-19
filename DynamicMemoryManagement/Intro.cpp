/*

new operator
The new operator denotes a request for memory allocation on the Free Store. If sufficient memory is available, a new operator initializes the memory and returns the address of the newly allocated and initialized memory to the pointer variable. 

Syntax to use new operator

pointer-variable = new data-type;
Here, the pointer variable is the pointer of type data-type. Data type could be any built-in data type including array or any user-defined data type including structure and class. 

// Release memory pointed by pointer-variable
delete pointer-variable;

// Release block of memory 
// pointed by pointer-variable
delete[] pointer-variable;  

Example:
// It will free the entire array
// pointed by p.
   delete[] p;

*/