#include "ClassC.h"
#include <iostream>


ClassC::ClassC(int var1_copy, std::string_view str1_copy): var1(var1_copy) ,  str1(str1_copy) {

    ptr = new int(var1);
}

// ClassC::ClassC(const ClassC& other)
// {
//     var1 = other.var1;
//     str1 = other.str1;

//     std::cout << "This is the user defined (explicit) copy constructor of classC" << std::endl;
// }

void ClassC::display(void)
{
    std::cout << "var1:  " << var1 << std::endl;
    std::cout << "str1:  " << str1 << std::endl;
    std::cout << "*ptr:  " << *ptr << std::endl;
}
