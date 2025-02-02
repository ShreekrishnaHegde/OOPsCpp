/*
----------------------------------------------Classes----------------------------------------------
Classes are created using the keyword class. A class declaration defines a new type
that links code and data. This new type is then used to declare objects of that class.
Thus, a class is a logical abstraction, but an object has physical existence. In other
words, an object is an instance of a class.

class class-name {
private data and functions
access-specifier:
data and functions
access-specifier:
data and functions
// ...
access-specifier:
data and functions
} object-list;

The object-list is optional. If present, it declares objects of the class. Here, access-specifier
is one of these three C++ keywords:
public
private
protected

By default, functions and data declared within a class are private to that class
and may be accessed only by other members of the class. The public access specifier
allows functions or data to be accessible to other parts of your program. The protected
access specifier is needed only when inheritance is involved 


By default, functions and data declared within a class are private to that class
and may be accessed only by other members of the class. The public access specifier
allows functions or data to be accessible to other parts of your program. The protected
access specifier is needed only when inheritance is involved 

Functions that are declared within a class are called member functions. Member
functions may access any element of the class of which they are a part. This includes
all private elements. Variables that are elements of a class are called member variables
or data members. (The term instance variable is also used.) Collectively, any element of
a class can be referred to as a member of that class.
There are a few restrictions that apply to class members. A non-static member
variable cannot have an initializer. No member can be an object of the class that is
being declared. (Although a member can be a pointer to the class that is being
declared.) No member can be declared as auto, extern, or register.


It is possible to grant a nonmember function access to the private members of a class
by using a friend. A friend function has access to all private and protected members
of the class for which it is a friend. To declare a friend function, include its prototype
within the class, preceding it with the keyword friend. Consider this program:
*/