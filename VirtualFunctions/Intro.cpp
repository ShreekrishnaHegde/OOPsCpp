/*
->A virtual function is a member function that is declared within a base class and redefined
    by a derived class.
->To create a virtual function, precede the function's declaration in the
    base class with the keyword virtual. 
->When a class containing a virtual function is inherited,
    the derived class redefines the virtual function to fit its own needs.
->A base-class pointer can be used to point to an object of
    any class derived from that base. When a base pointer points to a derived object that
    contains a virtual function, C++ determines which version of that function to call based
    upon the type of object pointed to by the pointer. And this determination is made at run
    time. Thus, when different objects are pointed to, different versions of the virtual function
    are executed. The same effect applies to base-class references.


--------------------------------------Early binding and late binding--------------------------------------
->Early binding refers to events that occur at compile time. In essence, early binding
    occurs when all information needed to call a function is known at compile time. (Put
    differently, early binding means that an object and a function call are bound during
    compilation.) 
->Examples of early binding include normal function calls (including
    standard library functions), overloaded function calls, and overloaded operators. 
->The main advantage to early binding is efficiency. 
->Because all information necessary to call
    a function is determined at compile time, these types of function calls are very fast.

->Late binding refers to function calls that are not resolved until run time. 
->Virtual functions are used to achieve late binding. 
->As you know, when access is via a base pointer or reference, the virtual function actually called is determined by 
    the type of object pointed to by the pointer.
->The main advantage to late binding is flexibility.
->Because a function call is not resolved until run time, late binding can make for somewhat slower execution times.


------------------------------------Rules for Virtual Functions-------------------------------------
->Virtual functions cannot be static.
->A virtual function can be a friend function of another class.
->Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
->The prototype of virtual functions should be the same in the base as well as the derived class.
->They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class 
    to override (or re-define the virtual function), in that case, the base class version of the function is used.
->A class may have a virtual destructor but it cannot have a virtual constructor.


------------------------------------------Limitations of Virtual Functions------------------------------------------
->Slower: The function call takes slightly longer due to the virtual mechanism and makes it more difficult 
    for the compiler to optimize because it does not know exactly which function is going to be called at compile time.
->Difficult to Debug: In a complex system, virtual functions can make it a little more difficult to figure out where a function 
    is being called from.




| Virtual Function                              | Pure Virtual Function                              |
|------------------------------------------------|----------------------------------------------------|
| A virtual function is a member                 | A pure virtual function is a member                |
| function of base class which can be            | function of base class whose only declaration      |
| redefined by derived class.                    | is provided in base class and should be defined    |
|                                                | in derived class, otherwise derived class also     |
|                                                | becomes abstract.                                  |
| Classes having virtual functions               | Base class containing pure virtual                 |
| are not abstract.                              | function becomes abstract.                         |
| **Syntax:**                                    | **Syntax:**                                        |
| `virtual <func_type> <func_name>() { // code }`| `virtual <func_type> <func_name>() = 0;`           |
| Definition is given in base class.             | No definition is given in base class.              |
| Base class having virtual function can         | Base class having pure virtual function            |
| be instantiated, i.e., its object can be made. | becomes abstract, i.e., it cannot be instantiated. |
| If derived class does not redefine             | If derived class does not redefine                 |
| virtual function of the base class,            | the pure virtual function of the base class,       |
| then it does not affect compilation.           | then no compilation error is encountered,          |
|                                                | but like the base class, derived class             |
|                                                | also becomes abstract.                             |

*/
