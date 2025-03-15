#include <iostream>

/*
    - The this pointer is a pointer that points to the object that is currently being executed.abort
    - The this pointer is a special pointer that is available in every member function of a class.
    - The this pointer is a constant pointer that cannot be modified.
    - The this pointer is a pointer concept is also applied to constructors and destructors.
    - The this pointer is used to resolve name conflicts between class members and function parameters.
    - The this pointer is used to access the object's data members and member functions.
*/

class Dog
{
public:
    Dog() = default;
    Dog(std::string_view name_param, std::string_view breed_param, int age_param);
    ~Dog();

    void print_info()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Breed: " << breed << std::endl;
        std::cout << "Age: " << *p_age << std::endl;
    }

    // Setters with return type Dog * to allow chaining
    Dog * set_name(std::string_view name_param)
    {
        this->name = name_param; 

        return this;
    }

    Dog * set_breed(std::string_view breed_param)
    {
        this->breed = breed_param; 

        return this;
    }

    Dog * set_age(int age_param)
    {
        *this->p_age = age_param; 

        return this;
    }

private:
    std::string name;
    std::string breed;
    int *p_age{nullptr};
};

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = age_param;

    std::cout << "Constructor called for " << name << " at" << this << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    p_age = nullptr;

    std::cout << "Destructor called for " << name << " at" << this << std::endl;
}

int main()
{
    Dog dog_1("Buddy", "Golden Retriever", 5);

    dog_1.set_name("Max");

    dog_1.print_info();

    std::cout << "dog_1 is at " << &dog_1 << std::endl;

    std::cout << "---------------------------------" << std::endl;

    Dog dog_2("Max", "Poodle", 3);
    dog_2.set_name("Bella")->set_breed("Poodle")->set_age(2);
    dog_2.print_info();

    return 0;
}