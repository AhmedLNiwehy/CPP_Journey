#ifndef __CLASSD
#define __CLASSD

#include <string>

/*
    * Deep copy constructor is a user-defined constructor that creates a new object as a copy of an existing object.
    * It is used when an object has pointers or any runtime allocation of the resource like a file handle, a network connection, etc.   
    * The default copy constructor does only shallow copy.
    * Shallow Copy means that only the pointers will be copied not the actual resources that the pointers are pointing to.
      This can lead to dangling pointers if the original object is deleted.
    * Deep Copy means that we create a new object and allocate new memory for the pointer member variable.
      This ensures that each object has its own copy of the data, and modifying one object does not affect the other.
      
    * Here, we are using the deep copy constructor to create a new object of ClassD using an existing object of ClassD.
*/

class ClassD{
public:
    int var1;
    int *ptr;
    std::string_view str1;

    ClassD(int var1_copy, std::string_view str1_copy);
    ClassD(const ClassD& other);
    void display();
};



#endif