#include <iostream>
#include <string_view>

/*
    - Destructors are special member functions that are called when an object of a class is destroyed.
    - Destructors have the same name as the class preceded by a tilde (~) and do not have a return type.
    - Destructors cannot have parameters.
    - Destructors cannot have default arguments.
    - Destructors cannot be overloaded.
    - Destructors can be defined inside the class definition or outside the class definition.
    - Destructors can be explicitly called using the class name and the scope resolution operator.
    - Destructors can be implicitly called when an object goes out of scope.
    - Destructors can be used to release resources that were allocated when an object was created.
    - Destructors can be used to perform any other cleanup that is needed when an object is destroyed.

    - Destructors are called in the reverse order of the constructors.
    - Destructors are called when an object goes out of scope.
    - Destructors are called when an object is deleted using the delete keyword.
    - Destructors are called when an object is destroyed by the program.
    - Destructors are called when an object is destroyed by the operating system.
    - Destructors are called when an object is destroyed by the user.
*/



class Dog
{
    public:
        Dog() = default;
        Dog(std::string_view name_param,  std::string_view breed_param,  int age_param);
        ~Dog();


    private:
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};

Dog::Dog(std::string_view  name_param, std::string_view  breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;

    std::cout << "Constructor called for " << name << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    p_age = nullptr;
    
    std::cout << "Destructor called for " << name << std::endl;
}

void foo()
{
    Dog dog_3("Rocky", "Labrador", 4);
}

void bar()
{
    Dog *Dog_p = new Dog("Bella", "Poodle", 2);
    
    std::cout << "Deleting Bella" << std::endl;
    delete Dog_p;                // Destructor called for Bella here
    Dog_p = nullptr;

    std::cout << "Done for bar! " << std::endl;
}

int main ()
{

    Dog dog_1("Buddy", "Golden Retriever", 5);
    Dog dog_2("Max", "Poodle", 3);

    foo();                          // Destructor called for Rocky
    bar();                          // Destructor called for Bella

    std::cout << "Done!" << std::endl;


    return 0;
}