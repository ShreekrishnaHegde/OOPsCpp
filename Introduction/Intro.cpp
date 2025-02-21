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