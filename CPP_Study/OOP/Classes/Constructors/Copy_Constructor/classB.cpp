#include "classB.h"
#include <iostream>


ClassB::ClassB(int var1_copy, std::string_view str1_copy): var1(var1_copy) ,  str1(str1_copy) {}

ClassB::ClassB(const ClassB& other)
{
    var1 = other.var1;
    str1 = other.str1;

    std::cout << "This is the user defined (explicit) copy constructor of classB" << std::endl;
}

void ClassB::display(void)
{
    std::cout << "var1:  " << var1 << std::endl;
    std::cout << "str1:  " << str1 << std::endl;
}
