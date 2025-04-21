#include <iostream>

/*
    - Delegating constructors allow one constructor to call another constructor in the same class.
    - This feature is useful for reducing code duplication and improving maintainability.
    - It was introduced in C++11.
    - The syntax is simple: you can call another constructor in the member initializer list of the delegating constructor.
*/

class Base
{
private:
    int x; // Member variable

public:
    Base() : Base(0) // Delegating to another constructor
    {
        std::cout << "Base default constructor called." << std::endl;
    }

    Base(int val) : x(val) // Constructor with parameter
    {
        std::cout << "Base constructor called with value: " << x << std::endl;
    }
};

int main()
{
    std::cout << "Delegating Constructor Example" << std::endl;

    Base obj1;      // Calls the default constructor
    Base obj2(10);  // Calls the constructor with parameter
    return 0;
}