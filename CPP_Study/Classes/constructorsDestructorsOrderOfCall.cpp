#include <iostream>
#include <string_view>

/*
    - Destructors are called in the reverse order of the constructors.
    - Destructors are called when an object goes out of scope.

    Why is the destructor called in the reverse order of the constructors?
    - When an object is created, the constructors are called in the order in which the objects are created. 
    - When an object goes out of scope, the destructors are called in the reverse order of the constructors.
    - This is because the objects are destroyed in the reverse order of their creation. 
    - This ensures that the resources allocated by the constructors are deallocated in the reverse order of their allocation.
    - This is important because the resources allocated by one object may depend on the resources allocated by another object.
    
    - For example, if one object allocates a resource that is used by another object, the object that uses the resource must be destroyed before the object that allocates the resource.
    - If the objects were destroyed in the same order as they were created, the resource would be deallocated before it was used, leading to undefined behavior.
    - By destroying the objects in the reverse order of their creation, the resources are deallocated in the correct order, preventing undefined behavior.
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

int main ()
{

    Dog dog_1("Buddy", "Golden Retriever", 5);
    Dog dog_2("Max", "Poodle", 3);
    Dog dog_3("Rocky", "Labrador", 4);
    Dog dog4("Bella", "Poodle", 2);

    return 0;
}