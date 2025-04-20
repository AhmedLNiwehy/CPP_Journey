/*
    - Move Semantics and Rvalue References in C++
    - Move semantics is a feature introduced in C++11 that allows the resources of temporary objects (rvalues) to be "moved" rather than copied.
    - This can lead to performance improvements, especially when dealing with large objects or resources like dynamic memory.

    - Rvalue references are a type of reference that can bind to temporary objects (rvalues) and allow for move semantics to be implemented.
    - They are declared using `&&` syntax.
    - Rvalue references enable the implementation of move constructors and move assignment operators, which are used to transfer ownership of resources from one object to another.
    - Rvalue references are typically used in conjunction with move semantics to optimize resource management and improve performance.

*/

#include <iostream>

// Function overloads to demonstrate rvalue and lvalue references
void process(int &&x)
{
    std::cout << "Processing rvalue reference: " << x << std::endl;
}

void process(const int &x)
{
    std::cout << "Processing lvalue reference: " << x << std::endl;
}

class MyClass
{
private:
    int data;

public:
    MyClass(int value) : data(value)
    {
        std::cout << "Constructor called with value: " << data << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass &other) : data(other.data)
    {
        std::cout << "Copy constructor called, copied value: " << data << std::endl;
    }

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data)
    {
        other.data = 0; // Leave the moved-from object in a valid state
        std::cout << "Move constructor called, moved value: " << data << std::endl;
    }

    // assignment move constructor
    MyClass &operator=(MyClass &&other) noexcept
    {
        if (this != &other) // Avoid self-assignment
        {
            data = other.data;
            other.data = 0; // Leave the moved-from object in a valid state
            std::cout << "Move assignment operator called, moved value: " << data << std::endl;
        }
        return *this;
    }

    void display() const
    {
        std::cout << "Data: " << data << std::endl;
    }
};

int main()
{
    int a = 10;
    process(a);  // Calls lvalue reference overload
    process(20); // Calls rvalue reference overload

    std::cout << "Creating MyClass object..." << std::endl;
    MyClass obj1(100); // Calls constructor
    obj1.display();

    MyClass obj2 = std::move(obj1); // Calls move constructor
    obj2.display(); // obj1 is now in a moved-from state
    obj1.display(); // obj1's data is now 0

    return 0;
}   