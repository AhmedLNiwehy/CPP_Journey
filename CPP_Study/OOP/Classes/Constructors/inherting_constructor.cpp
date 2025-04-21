#include <iostream>

/*
    - Inheriting constructors allow a derived class to inherit the constructors of its base class.
    - This feature was introduced in C++11 and is useful for reducing code duplication and improving maintainability.
    - The syntax is simple: you can use the `using` keyword to inherit constructors from the base class.
    - The derived class can also define its own constructors in addition to the inherited ones.
    - The inherited constructors can be used to initialize the base class part of the derived class object.
    - The derived class can also add its own member variables and constructors.
    - If the derived class add a new parameters to the constructor, it can still call the base class constructor
      using the member initializer list and pass the parameters to it.
*/

class Base
{
public:
    Base(int x, double y) : x(x), y(y) {}
    Base(const std::string &str) : x(str.length()), y(0.0) {}

    void display() const
    {
        std::cout << "Base x:" << x << ",y:" << y << std::endl;
    }

private:
    int x;
    double y;
};

class Derived : public Base
{
public:
    // Inheriting constructors from Base
    using Base::Base; // Inherit all constructors from Base

    void display() const
    {
        Base::display(); // Call the base class display function
    }
};

int main()
{
    std::cout << "Inherting Constructor Example" << std::endl;

    Derived derived_1(3, 5.5);
    derived_1.display();

    return 0;
}