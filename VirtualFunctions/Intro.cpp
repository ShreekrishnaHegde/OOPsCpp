/*
A virtual function is a member function that is declared within a base class and redefined
by a derived class. To create a virtual function, precede the function's declaration in the
base class with the keyword virtual. When a class containing a virtual function is inherited,
the derived class redefines the virtual function to fit its own needs. In essence, virtual
functions implement the "one interface, multiple methods" philosophy that underlies
polymorphism. The virtual function within the base class defines the form of the interface
to that function. Each redefinition of the virtual function by a derived class implements
its operation as it relates specifically to the derived class. That is, the redefinition
creates a specific method.
When accessed "normally," virtual functions behave just like any other type of class
member function. However, what makes virtual functions important and capable of
supporting run-time polymorphism is how they behave when accessed via a pointer.
As discussed in Chapter 13, a base-class pointer can be used to point to an object of
any class derived from that base. When a base pointer points to a derived object that
contains a virtual function, C++ determines which version of that function to call based
upon the type of object pointed to by the pointer. And this determination is made at run
time. Thus, when different objects are pointed to, different versions of the virtual function
are executed. The same effect applies to base-class references.
*/
