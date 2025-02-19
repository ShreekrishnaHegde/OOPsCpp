/*

->Exception handling is a programming concept used to manage errors that occur during the execution of a program. 
->When an error occurs, the normal flow of the program is disrupted. 
->The program creates an “exception” object that contains information about the error. 
->The process of responding to this exception is called “exception handling”.


->Code that has to be monitored for exceptions must have been executed from
    within a try block. 
->Exceptions that can be thrown by the monitored code are caught by a
    catch statement, which immediately follows the try statement in which the exception
    was thrown. 
->Syntax:
        try {
        // try block
        }
        catch (type1 arg) {
        // catch block
        }
        catch (type2 arg) {
        // catch block
        }
        catch (type3 arg) {
        // catch block
        }
        .
        .
        .
        catch (typeN arg) {
        // catch block
        }

->When an exception is thrown, it is caught by its corresponding catch statement,
    which processes the exception.
->There can be more than one catch statement associated with a try.
    Which catch statement is used is determined by the type of the exception.
->That is, if the data type specified by a catch matches that of the exception, then that
    catch statement is executed (and all others are bypassed).
->When an exception is caught, arg will receive its value. 
->If no exception is thrown (that is, no error occurs within the try block), then no
    catch statement is executed.


----------------------------Need of Exception Handling--------------------------------

Separation of Error Handling Code from Normal Code: 
    There are always if-else conditions to handle errors in traditional error handling codes. 
    These conditions and the code to handle errors get mixed up with the normal flow. 
    This makes the code less readable and maintainable. 
    With try/catch blocks, the code for error handling becomes separate from the normal flow.
 
Functions/Methods can handle only the exceptions they choose: 
    A function can throw many exceptions, but may choose to handle some of them. The other exceptions, which are thrown but not caught, 
    can be handled by the caller. If the caller chooses not to catch them, then the exceptions are handled by the caller of the caller. 
    In C++, a function can specify the exceptions that it throws using the throw keyword. The caller of this function must handle the exception in some way (either by specifying it again or catching it).
 
Grouping of Error Types: In C++, both basic types and objects can be thrown as exceptions. We can create a hierarchy of exception objects, group exceptions in namespaces or classes, and categorize them according to their types.

--------------------------------Properties of Exception Handling--------------------------------
->There is a special catch block called the ‘catch-all’ block, written as catch(…), that can be used to catch all types of exceptions.
->Implicit type conversion doesn’t happen for primitive types.
->If an exception is thrown and not caught anywhere, the program terminates abnormally.
->A derived class exception should be caught before a base class exception.
->The compiler doesn’t check whether an exception is caught or not i.c all exceptions are unchecked.
->In C++, try/catch blocks can be nested. Also, an exception can be re-thrown using “throw; “. 
->When an exception is thrown, all objects created inside the enclosing try block are destroyed before the control 
    is transferred to the catch block.
->An exception can be thrown from outside the try block as long as it is thrown by
    a function that is called from within try block.
->A try block can be localized to a function.
->An exception can be of any type, including class types that you create. 



----------------------------------Limitations of Exception Handling----------------------------------
->Overhead: It can slow down your program.
->Complexity: Misuse can make your code hard to read and maintain.
->No enforcement: C++ doesn’t enforce exception handling, leading to inconsistent practices.
->Unpredictable control flow: Exceptions can make the flow of control hard to follow.
->Resource leaks: If not handled properly, exceptions can lead to resource leaks.
->There is no C++ standard on how to use exception handling, hence many variations in exception-handling practices exist.

*/