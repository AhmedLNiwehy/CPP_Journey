#ifndef __CLASSC
#define __CLASSC

#include <string>

/*
    * Here the default copy constructor will not work properly because the class has a pointer member variable.
    * The default copy constructor will only copy the pointer value, not the data it points to.
    
    
    * To fix this, we need to define our own copy constructor that performs a deep copy.
    * A deep copy means that we create a new object and allocate new memory for the pointer member variable.
*/

class ClassC{
public:
    int var1;
    int *ptr;
    std::string_view str1;

    ClassC(int var1_copy, std::string_view str1_copy);
    // ClassC(const ClassC& other);
    void display();
};



#endif