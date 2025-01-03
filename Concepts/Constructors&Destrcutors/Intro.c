/*
->Constructor in C++ is a special method that is invoked automatically at the time an object of a class is created. 
->It is used to initialize the data members of new objects generally. 
->The constructor in C++ has the same name as the class or structure. 
->It constructs the values i.e. provides data for the object which is why it is known as a constructor.

Characteristics of Constructors in C++
->The name of the constructor is the same as its class name.
->Constructors are mostly declared in the public section of the class though they can be declared in the private section of the class.
->Constructors do not return values; hence they do not have a return type.
->A constructor gets called automatically when we create the object of the class.


Types of Constructors in C++

->Default Constructor: 
    A default constructor is a constructor that doesn’t take any argument. 
    It has no parameters. It is also called a zero-argument constructor.
    The compiler a tically creates an implicit default constructor if the programmer does not define one.

    Syntax of Default Constructor
        className() {
            // body_of_constructor
    }

->Parameterized Constructor: 
    Parameterized constructors make it possible to pass arguments to constructors. 
    Typically, these arguments help initialize an object when it is created. 

    Syntax of Parameterized Constructor
        className (parameters...) {
            // body
        }

->Copy Constructor: 
    Takes a reference to another object of the same class. 
    Used to create a copy of an object.
    A copy constructor is a member function that initializes an object using another object of the same class.
    Just like the default constructor, the C++ compiler also provides an implicit copy constructor if the 
        explicit copy constructor definition is not present.

    Syntax of Copy Constructor
    ClassName (ClassName &obj)
    {
    // body_containing_logic
    }

Destrcutors
Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed
->Syntax:
    ~ class-name() {
        // some instructions
    }
Characteristics of a Destructor
->A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor. 
->Destructor has the same name as their class name preceded by a tilde (~) symbol.
->It is not possible to define more than one destructor.
->The destructor is only one way to destroy the object created by the constructor. Hence, destructor cannot be overloaded.
->It cannot be declared static or const.
->Destructor neither requires any argument nor returns any value.
->It is automatically called when an object goes out of scope. 
->Destructor release memory space occupied by the objects created by the constructor.
->In destructor, objects are destroyed in the reverse of an object creation.
*/