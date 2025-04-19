#include <iostream>

/*
    Classes are a way to define new types in C++.
    A class is a user-defined type that can have data members (variables) and member functions (methods).

    A class is a blueprint for creating objects (instances) of that type.
    An object is an instance of a class.

    - Class methods are functions that are defined inside a class.
    - Class methods can access the data members of the class.
    - Class methods can be defined inside the class definition or outside the class definition.

    - Class data members are variables that are defined inside a class.
    - Class data members can be accessed by class methods regardless of whether they are defined inside or outside the class definition.

    - Private data members are only accessible by class methods.
    - Public data members are accessible by anyone.
*/


const double PI{3.1415926535897932384626433832795};

class Cylindar
{
public:
    double base_radius {1};
    double height {1};

public:
    // Functions (methods)
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }
};

int main()
{

    Cylindar cylindar_1;
    cylindar_1.base_radius = 4;
    cylindar_1.height = 4;

    std::cout << "cylindar_1 volume: " << cylindar_1.volume() << std::endl;

    return 0;
}