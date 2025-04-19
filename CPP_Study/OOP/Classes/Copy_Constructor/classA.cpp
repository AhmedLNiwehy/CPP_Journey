#include "classA.h"
#include <iostream>


ClassA::ClassA(int var1_copy, std::string_view str1_copy): var1(var1_copy) ,  str1(str1_copy) {}

void ClassA::display(void)
{
    std::cout << "var1:  " << var1 << std::endl;
    std::cout << "str1:  " << str1 << std::endl;
}
