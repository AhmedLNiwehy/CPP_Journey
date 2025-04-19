#include <iostream>
#include <vector>

void printVector(std::vector<int> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        std::cout << vect[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    /*
        Vector declaration and initialization.

        vectors can be declared and initialized in multiple ways as shown below:
        1. Empty vector: vector<T> vec_name;
        2. Vector with elements: vector<T> vec_name = {elem1, elem2, elem3, ...};
        3. Vector with elements using initializer list: vector<T> vec_name({elem1, elem2, elem3, ...});
        4. Vector with n elements of a specific value: vector<T> vec_name(n, value);

        Here, T is the type of the elements in the vector.
        vec_name is the name of the vector.
        elem1, elem2, elem3, ... are the elements of the vector.
        n is the number of elements in the vector.
        value is the value of the elements in the vector.
    */

    // Empty vector of integers
    std::vector<int> vect1;

    // Empty vector of integers
    std::vector<int> vect2 = {1, 2, 3, 4, 5};

    // Empty vector of integers
    std::vector<int> vect3({6, 7, 8, 9, 10});

    // Empty vector of integers
    std::vector<int> vect4(10, 5);


    std::cout << "Printing vect1: ";            // Note: vect1 is empty not initialized with zeros
    printVector(vect1);

    std::cout << "Printing vect2: ";
    printVector(vect2);

    std::cout << "Printing vect3: ";
    printVector(vect3);

    std::cout << "Printing vect4: ";
    printVector(vect4);

    return 0;
}