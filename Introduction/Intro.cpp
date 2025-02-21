/*

| C                                             | C++                                      |
|-----------------------------------------------|---------------------------------|
| Supports procedural programming.              | Supports both procedural and object-oriented programming. |
| Data and functions are separated (procedural).| Data and functions are encapsulated in objects (OOP). |
| Does not support data hiding.                 | Data is hidden by encapsulation.          |
| Function-driven (procedural).                 | Object-driven (OOP).                      |
| Function &operator overloading not supported. | Function and operator overloading supported. |
| Functions not defined inside structures.      | Functions can be inside structures.       |
| No namespaces.                                | Uses namespaces to avoid name collisions. |
| Does not support reference variables.         | Supports reference variables.             |
| No virtual and friend functions.              | Supports virtual and friend functions.    |
| Does not support inheritance.                 | Supports inheritance.                    |
| No direct support for exception handling.     | Supports exception handling.              |
| No access modifiers in structures.            | Structures have access modifiers.         |
| No strict type checking.                      | Strict type checking. Programs that run in C may show warnings/errors in C++. |
| File extension is “.c”                        | File extension is “.cpp”, “.c++”, “.cc”, “.cxx” |
| Does not support polymorphism,                | Supports polymorphism, encapsulation, and inheritance (OOP language). |
|   encapsulation, and inheritance              |
| Uses malloc() and calloc() for memory         | Uses new and delete operators for memory management. |
   allocation, free() for de-allocation.        | 


--------------------------------Features of OBJECT ORIENTED PROGRAMMING--------------------------------
------->Class
->A class is a user-defined data type. 
->It consists of data members and member functions, which can be accessed and used by creating an instance of that class. 
->A class is like a blueprint for an object.  
->For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will 
   share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, Car is 
   the class, and wheels, speed limits, mileage are their properties.

------->Object
->An Object is an instance of a Class. 
->When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated. 
->An object has an identity, state, and behavior. 
->Each object contains data and code to manipulate the data.
->For example “Dog” is a real-life Object, which has some characteristics like color, Breed, Bark, Sleep, and Eats.

------->Data Abstraction
-> Data abstraction refers to providing only essential information about the data to the outside world, hiding the background details or
 implementation. 
->Consider a real-life example of a man driving a car. The man only knows that pressing the accelerators will increase the speed of 
   the car or applying brakes will stop the car, but he does not know about how on pressing the accelerator the speed is increasing, 
   he does not know about the inner mechanism of the car or the implementation of the accelerator, brakes, etc in the car.

------->Encapsulation
->Encapsulation is defined as the wrapping up of data under a single unit. 
->It is the mechanism that binds together code and the data it manipulates. 
->In Encapsulation, the variables or data of a class are hidden from any other class and can be accessed only through 
   any member function of their class in which they are declared. 
->It is also known as data-hiding

------->Inheritance
->The capability of a class to derive properties and characteristics from another class is called Inheritance. 
->When we write a class, we inherit properties from other classes. 
->So when we create a class, we do not need to write all the properties and functions again and again, as these 
   can be inherited from another class that possesses it. Inheritance allows the user to reuse the code whenever possible and reduce its redundancy.


-----------------------------------Variables in C++--------------------------------
In C++, variable is a name given to a memory location. 
The value stored in a variable can be accessed or changed during program execution.


Syntax of Variables:
   type name;

   type: type of data that a variable can store.
   name: name assigned to the variable.


Types of Variables

int: For storing integers or whole numbers.
float: For storing real numbers with decimal points.
char: For storing single characters.
bool: For storing boolean value i.e. true and false.
string: For storing the textual data.

---------------->Rules For Naming Variable
The names given to a variable is called identifiers. There are some rules for giving a name to the variable:
The name of the variable contains letters, digits, and underscores.
The name of the variable is case sensitive (e.g. Arr and arr both are different variables).
The name of the variable does not contain any whitespace and special characters (ex #, $, %, *, etc).
All the variable names must begin with a letter of the alphabet or an underscore (_).
We cannot used C++ keyword (e.g. float, double, class) as a variable name.




-------------------------------Reference in C++--------------------------------
->When a variable is declared as a reference, it becomes an alternative name for an existing variable. 
->A variable can be declared as a reference by putting ‘&’ in the declaration. 

--------->Applications of Reference in C++
   Modify the passed parameters in a function
   Avoiding a copy of large structures


-------->Limitations of References
   Once a reference is created, it cannot be later made to reference another object; it cannot be reset. 
   References cannot be NULL. 
   A reference must be initialized when declared. 

| References                                               | Pointers                                                            |
|----------------------------------------------------------|---------------------------------------------------------------------|
| The variable cannot be reassigned in Reference.          | The variable can be reassigned in Pointers.                         |
| It shares the same address as the original variable.     | Pointers have their own memory address.                             |
| It is referring to another variable.                     | It is storing the address of the variable.                          |
| It does not have null value.                             | It can have value assigned as null.                                 |
| This variable is referenced by the method pass by value. | The pointer does its work by the method known as pass by reference. |

*/