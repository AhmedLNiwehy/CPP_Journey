#include <iostream>

/*
    sizeof class objects
    - sizeof class objects is not the sum of the size of its members
    - sizeof class objects is the sum of the size of its members + padding
    - padding is added to align the members of the class object
    - padding is added to make the class object size a multiple of the largest member size
    - padding is added to make the class object size a multiple of the alignment requirement of the class object
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
    - padding is added to make the class object size a multiple of the alignment requirement of the largest member
*/

class Dog{
    public:

    Dog() = default;
    Dog(std::string_view name): name(name) {}

    private:
    std::string_view name;          // 16-byte string_view object
    char *ptr{nullptr};             // 8-byte pointer
};





int main()
{

    Dog dog1("buddy");

    std::cout << "Size of Dog object: " << sizeof(dog1) << std::endl;


    return 0;
}