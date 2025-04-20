#include <iostream>

/*
    - Class constructors are special member functions that are called when an object of a class is created.
    - Constructors have the same name as the class and do not have a return type.
    - Constructors can have parameters.
    - Constructors can have default arguments.
    - Constructors can be overloaded.
    - Constructors can be defined inside the class definition or outside the class definition.
    - Constructors can be explicitly called using the class name and the scope resolution operator.
    - Constructors can be implicitly called when an object is created.
    - Constructors can be used to initialize data members of a class.
    - Constructors can be used to perform any other initialization that is needed when an object is created.
    - Constructors can be used to allocate resources that are needed when an object is created.
    - Constructors can be used to perform any other operations that are needed when an object is created.
*/

const double PI{3.1415926535897932384626433832795};

class Cylindar
{
public:

    // Constructors
    Cylindar()            
    {
        base_radius = 2.0;
        height = 2.0;
    }

    Cylindar(double rad_param, double height_param)            
    {
        base_radius = rad_param;
        height = height_param;
    }

    // Functions (methods)
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }

private:
    double base_radius{1.0};
    double height{1.0};
};

int main()
{

    Cylindar cylindar_1;
    std::cout << "cylindar_1 volume: " << cylindar_1.volume() << std::endl;

    Cylindar cylindar_2(5, 5);
    std::cout << "cylindar_2 volume: " << cylindar_2.volume() << std::endl;

    return 0;
}