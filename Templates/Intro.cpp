/*

Using templates, it
is possible to create generic functions and classes. In a generic function or class, the
type of data upon which the function or class operates is specified as a parameter.
Thus, you can use one function or class with several different types of data without
having to explicitly recode specific versions for each data type.

->Templates are a way to allow functions and classes to use the same code for many different data types.
->here is no difference between the class and typename keywords, you can use any one of them.

Template parameters are how you specify how many data types and values a template has access to.

There are two kinds of template parameters: typed parameters and non-typed parameters.

Typed Parameters
Typed parameters allow you to specify a "wildcard" data type for a class or function.

A typed parameter uses the keyword class or typename followed by a name. There is no difference between the class and typename keywords, you can use any one of them.

The syntax of a template with typed parameters looks like this:

template <class A, class B>

Non-typed parameters let you pass values directly to the class or function that is using the template.

To add a non-typed parameter, write the data type of the value followed by a name. The syntax looks like this:

template <dataType1 name1, dataType2 name2>












--------------------Working of Templates--------------------
->Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type-checking 
    before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain 
    multiple copies of the same function/class. 

*/