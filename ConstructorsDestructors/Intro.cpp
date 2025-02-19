/*
| S. No. | Constructor                                                                  |Destructor                                                    |
|--------|------------------------------------------------------------------------------|----------------------------------------------------------------|
| 1      | Constructor helps to initialize the object of a class.                       | Whereas destructor is used to destroy the instances.           |
| 2      | It is declared as `className( arguments if any ){ Constructor’s Body }`.     | Whereas it is declared as `~className( no arguments ){ }`.     |
| 3      | Constructor can either accept arguments or not.                              | While it can’t have any arguments.                             |
| 4      | A constructor is called when an instance or object of a class is created.    | It is called while object of the class is freed or deleted.    |
| 5      | Constructor is used to allocate the memory to an instance or object.         | While it is used to deallocate the memory of an object of a class. |
| 6      | Constructor can be overloaded.                                               | While it can’t be overloaded.                                  |
| 7      | In a class, there can be multiple constructors.                              | While in a class, there is always a single destructor.         |
*/


/*
-------------------------------Characteristics of Constructors in C++--------------------------------
->The name of the constructor is the same as its class name.
->Constructors are mostly declared in the public section of the class though they can be declared in the private section of the class.
->Constructors do not return values; hence they do not have a return type.
->A constructor gets called automatically when we create the object of the class.
    
->Defining Constructors inside the class:
    <class-name> (list-of-parameters) {
     // constructor definition
    }

->Defining Constructors outside the class:
    <class-name> {

    // Declaring the constructor
    // Definiton will be provided outside
    <class-name>();

    // Defining remaining class
    };

    <class-name>: :<class-name>(list-of-parameters){
        // constructor definition 
    }
*/