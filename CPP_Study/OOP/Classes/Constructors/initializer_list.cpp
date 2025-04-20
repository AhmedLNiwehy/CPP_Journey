#include <iostream>

/*
    - Initializer Lists are a way to initialize class members and base classes before the body of the
      constructor executes. They are specified after the constructor’s parameter list, starting with a
      colon : and followed by a list of initializers.

    - They are particularly useful for initializing:  
        1- const members
        2- reference members
        3- base classes
        4- members of classes that do not have a default constructor
        5- members that require complex initialization (e.g., STL containers, smart pointers, etc.)
        
    - Initializer lists are also more efficient than assignment in the constructor body, as they avoid
      unnecessary default construction and assignment of members. 
*/

class ClassA
{
private:
    const int const_var1;
    int & ref_var2;

public:
    ClassA(int var1, int var2) : const_var1(var1), ref_var2(var2) // Initializer list
    {
        // const_var1 = var1; // Error: const member cannot be assigned after initialization
        // ref_var2 = var2;   // Error: reference member cannot be assigned after initialization
        std::cout << "Constructor for ClassA is called!" << std::endl;
    }

    void display(void)
    {
        std::cout << "ClassA const_var: " << const_var1 << std::endl;
        std::cout << "ClassA ref_var: " << ref_var2 << std::endl;
    }

};

class Base {
    private:
        int baseValue;
    
    public:
        Base(int val) : baseValue(val) {
            std::cout << "Base constructor called with value " << baseValue << std::endl;
        }
};
    
class Derived : public Base {
    public:
        Derived(int val) : Base(val) { // initializer list to initialize Base
            std::cout << "Derived constructor called" << std::endl;
        }
};

int main()
{

    ClassA class_a(5, 10);
    class_a.display();

    // class_a.const_var1 = 20; // Error: const member cannot be assigned after initialization
    // class_a.ref_var2 = 30;   // Error: reference member cannot be assigned after initialization

    class Derived derived(100); // Calls Base constructor first, then Derived constructor

    return 0;
}