/*
->The copy constructor is a constructor that creates an object by initializing it with 
    an object of the same class which has been created previously. 
->Default copy constructor does only shallow copy.
->A copy constructor is called when a new object is created from an existing object, as a copy of the existing object. 
    The assignment operator is called when an already initialized object is assigned a new value from another existing object

---------------------------------------Need of User Defined Copy Constructor---------------------------------------
->If we don’t define our own copy constructor, the C++ compiler creates a default copy constructor for each class which works fine 
in general. However, we need to define our own copy constructor only if an object has pointers or any runtime allocation of the
 resource like a file handle, a network connection, etc because the default constructor does only shallow copy.

->Shallow Copy means that only the pointers will be copied not the actual resources that the pointers are pointing to. 
This can lead to dangling pointers if the original object is deleted.
->Deep copy is possible only with a user-defined copy constructor. 
In a user-defined copy constructor, we make sure that pointers (or references) of copied objects point to new copy of 
the dynamic resource allocated manually in the copy constructor using new operators.

----------------------------------------When is the Copy Constructor Called?----------------------------------------
->When an object of the class is returned by value.
->When an object of the class is passed (to a function) by value as an argument.
->When an object is constructed based on another object of the same class.
->When the compiler generates a temporary object.

-------------------------Application & Use-------------------------
->Used when you need to create a new object as a copy of an existing object.
->Essential for proper copying of objects that manage resources like dynamic memory.

-------------------------------Advantages-------------------------------
->Ensures a deep copy of objects, especially when managing dynamic resources.
->Prevents resource leaks and undefined behavior from shallow copying.

---------------------------Disadvantages-------------------------------
->Can be expensive in terms of performance if the object being copied is large.
->Requires careful implementation to ensure all resources are correctly copied.

*/