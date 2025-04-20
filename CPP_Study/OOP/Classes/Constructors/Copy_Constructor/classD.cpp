#include "ClassD.h"
#include <iostream>


ClassD::ClassD(int var1_copy, std::string_view str1_copy): var1(var1_copy) ,  str1(str1_copy) {
    // Initialize the pointer with a new memory allocation
    ptr = new int(var1);
}

ClassD::ClassD(const ClassD& other)
{
    var1 = other.var1;
    str1 = other.str1;
    ptr = new int(*other.ptr);      // Deep copy of the pointer

    std::cout << "This is the deep copy constructor of ClassD" << std::endl;
}

void ClassD::display(void)
{
    std::cout << "var1:  " << var1 << std::endl;
    std::cout << "str1:  " << str1 << std::endl;
    std::cout << "*ptr:  " << *ptr << std::endl;
}
