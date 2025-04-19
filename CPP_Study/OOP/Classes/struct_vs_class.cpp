#include <iostream>

/*
    struct vs class
    - struct members are public by default
    - class members are private by default
    - struct is used for passive objects with public access
    - class is used for active objects with private access

    - struct and class are almost the same in C++
    - struct is used for plain old data (POD) objects
    - class is used for objects that have methods
*/

class Dog{
    std::string_view name;      // private by default
};

struct Cat{
    std::string_view name;      // public by default
};

void print_struct_info(struct Cat &cat)
{
    std::cout << "name: " << cat.name << std::endl;
}

int main()
{

    Dog dog1;
    // dog1.name = "buddy";     // Error: 'std::string_view Dog::name' is private within this context, because class members are private by default

    Cat cat1;
    cat1.name = "miaooo";
    print_struct_info(cat1);

    return 0;
}