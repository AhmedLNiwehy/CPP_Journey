#ifndef __CLASSA
#define __CLASSA

#include <string>

/*
    * A copy constructor is a type of constructor that creates an object using another object of the same class.
    * It is used to initialize an object with the values of another object.
    * The copy constructor is called when an object is passed by value to a function, returned from a function, or explicitly created as a copy of another object.
    * C++ compiler by default create a simple copy constructor when it is not explicitly defined by the programmer. 
    * The default copy constructor performs a shallow copy, which means it copies the values of the member variables directly.
    * Shallow Copy means that only the pointers will be copied not the actual resources that the pointers are pointing to.
      This can lead to dangling pointers if the original object is deleted.

    * Here, we are using the implicit copy constructor to create a new object of ClassA using an existing object of ClassA.
*/

class ClassA{
private:
    int var1;
    std::string_view str1;

public:
    ClassA(int var1_copy, std::string_view str1_copy);
    void display();
};



#endif