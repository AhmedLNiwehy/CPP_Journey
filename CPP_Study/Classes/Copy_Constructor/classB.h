#ifndef __CLASSB
#define __CLASSB

#include <string>

/*
    * Explicit copy constructor is a user-defined constructor that creates a new object as a copy of an existing object.
    * we need to define our own copy constructor only if an object has pointers or any runtime allocation of the resource
      like a file handle, a network connection, etc because the default constructor does only shallow copy.
    
    * Here, we are using the explicit copy constructor to create a new object of ClassB using an existing object of ClassB.
*/

class ClassB{
private:
    int var1;
    std::string_view str1;

public:
    ClassB(int var1_copy, std::string_view str1_copy);
    ClassB(const ClassB& other);
    void display();
};



#endif