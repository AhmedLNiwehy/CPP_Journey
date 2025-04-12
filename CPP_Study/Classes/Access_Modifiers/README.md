Access modifiers or access specifiers in a class are used to assign the accessibility to the class members.
They set some restrictions on the class members so that they can’t be directly accessed by the outside functions. Access modifiers are used to implement an important aspect of Object-Oriented Programming known as Data Hiding.

There are 3 types of access modifiers available in C++:

    1- Public
    2- Private (default)
    3- Protected


1. Public Specifier

All the class members declared under the public specifier will be available to everyone. The data members and member functions declared as public can be accessed by other classes and functions too. The public members of a class can be accessed from anywhere in the program using the direct member access operator (.) with the object of that class. 


2. Private Specifier

The class members declared as private can be accessed only by the member functions inside the class. They are not allowed to be accessed directly by any object or function outside the class. Only the member functions or the friend functions/ friend class are allowed to access the private data members of the class.


3. Protected Specifier

The protected access modifier is similar to the private access modifier in the sense that it can’t be accessed outside of its class unless with the help of a friend class. The difference is that the class members declared as Protected can be accessed by any subclass (derived class) of that class as well. 



Quick Comparison:

Modifier	Accessible in class?	Accessible in derived class?	Accessible outside?
private	        ✅ Yes	                     ❌ No	                     ❌ No
protected	    ✅ Yes	                     ✅ Yes	                     ❌ No
public	        ✅ Yes	                     ✅ Yes	                     ✅ Yes