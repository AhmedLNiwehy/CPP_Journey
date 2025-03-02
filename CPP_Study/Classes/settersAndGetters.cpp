#include <iostream>

/*
    - Setters and getters are methods that are used to set and get the values of private data members of a class.
    - Setters are used to set the values of private data members of a class.
    - Getters are used to get the values of private data members of a class.
    - Setters and getters are used to control access to private data members of a class.
    - Setters and getters are used to enforce encapsulation in a class.

    - Encapsulation is the process of hiding the implementation details of a class from the outside world.
    - Encapsulation is a way to protect the data members of a class from being accessed directly by other classes.
    - Encapsulation is a way to prevent the data members of a class from being modified by other classes.
*/

const double PI{3.1415926535897932384626433832795};

class Cylindar
{
public:
    // Constructors
    // Default constructor
    Cylindar()
    {
    }

    Cylindar(double rad_param, double height_param)
    {
        base_radius = rad_param;
        height = height_param;
    }

    void set_radius(double rad_param)
    {
        base_radius = rad_param;
    }

    double get_radius(void)
    {
        return base_radius;
    }

    void set_height(double height_param)
    {
        height = height_param;
    }

    double get_height(void)
    {
        return height;
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

    
    Cylindar cylindar_3(5, 5);
    cylindar_3.set_height(10);
    cylindar_3.set_radius(10);

    std::cout << "cylindar_3 radius: " << cylindar_3.get_radius() << std::endl;
    std::cout << "cylindar_3 height: " << cylindar_3.get_height() << std::endl;
    std::cout << "cylindar_3 volume: " << cylindar_3.volume() << std::endl;
    return 0;
}