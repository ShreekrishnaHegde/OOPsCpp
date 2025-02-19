/*

The capability of a class to derive properties and characteristics from another class is called Inheritance.

When a class inherits another, the members of the base class become members of the
derived class. Class inheritance uses this general form:
class derived-class-name : access base-class-name {
// body of class
}
The access status of the base-class members inside the derived class is determined by
access. The base-class access specifier must be either public, private, or protected. If no
access specifier is present, the access specifier is private by default if the derived class
is a class. If the derived class is a struct, then public is the default in the absence of an
explicit access specifier.
*/