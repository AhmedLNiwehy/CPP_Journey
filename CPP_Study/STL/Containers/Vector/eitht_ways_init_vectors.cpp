#include <iostream>
#include <vector>

void printVector(std::vector<int> &vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << " ";
    }
    std::cout << std::endl;
}

/*
    Vector initialization in C++ can be done in multiple ways.
    Here are eight ways to initialize a vector in C++:
    1. Default initialization
    2. Initialization with a specific size
    3. Initialization with a specific size and value
    4. Initialization using an initializer list
    5. Initialization from an array
    6. Initialization from another vector (copy constructor)
    7. Initialization using iterators
    8. Move initialization
*/

int main() {
    // 1. Default initialization
    std::vector<int> vec1;

    // 2. Initialization with a specific size
    std::vector<int> vec2(5); // 5 elements, default initialized to 0

    // 3. Initialization with a specific size and value
    std::vector<int> vec3(5, 10); // 5 elements, each initialized to 10

    // 4. Initialization using an initializer list
    std::vector<int> vec4 = {1, 2, 3, 4, 5};

    // 5. Initialization from an array
    int arr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec5(arr, arr + sizeof(arr) / sizeof(int));

    // 6. Initialization from another vector (copy constructor)
    std::vector<int> vec6(vec4);

    // 7. Initialization using iterators
    std::vector<int> vec7(vec4.begin(), vec4.end());

    // 8. Move initialization
    std::vector<int> vec8(std::move(vec4));



    std::cout << "Printing vec1: ";     
    printVector(vec1);

    std::cout << "Printing vec2: ";
    printVector(vec2);

    std::cout << "Printing vec3: ";
    printVector(vec3);

    std::cout << "Printing vec4: ";
    printVector(vec4);

    std::cout << "Printing vec5: ";     
    printVector(vec5);

    std::cout << "Printing vec6: ";
    printVector(vec6);

    std::cout << "Printing vec7: ";
    printVector(vec7);

    std::cout << "Printing vec8: ";
    printVector(vec8);

    return 0;           
}