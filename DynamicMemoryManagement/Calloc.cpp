/*
->The calloc() function returns a pointer to the first byte of the allocated memory block if the allocation succeeds.
->It initializes the values wit 0.


---------------------------------calloc() prototype---------------------------------
void* calloc(size_t num, size_t size);
The function is defined in <cstdlib> header file.


----------------------------calloc() Parameters--------------------------------
num: An unsigned integral value which represents number of elements.
size: An unsigned integral value which represents the memory block in bytes.

-----------------------------calloc() Return value-------------------------------
The calloc() function returns:
    ->a pointer to the start of the memory block allocated by the function.
    ->null pointer if allocation fails.
*/

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
   int *ptr;
   ptr = (int *)calloc(5, sizeof(int));
   if (!ptr) {
      cout << "Memory Allocation Failed";
      exit(1);
   }
   cout << "Initializing values..." << endl
        << endl;
   for (int i = 0; i < 5; i++) {
      ptr[i] =  i + 1;
   }
   cout<< "Initialized values" << endl;
   for (int i = 0; i < 5; i++) {
      cout << *(ptr + i) << endl;
   }
   free(ptr);
   return 0;
}
