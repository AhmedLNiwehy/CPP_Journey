#include <iostream>
#include <string>

template <typename T>
T maxOne (T a, T b) {
    return (a > b) ? a : b;
}

int main() {

    int a{3};
    int b{4};

    double c{3.5};
    double d{4.5};

    std::string e{"Hello"};
    std::string f{"World"};


    // Using function template with type deduction
    std::cout << "Max of integers: " << maxOne(a, b) << std::endl;
    std::cout << "Max of doubles: " << maxOne(c, d) << std::endl;
    std::cout << "Max of strings: " << maxOne(e, f) << std::endl;

    // Using function template with explicitly specifying the data type
    std::cout << "Max of integers: " << maxOne<int>(a, b) << std::endl;
    std::cout << "Max of doubles: " << maxOne<double>(c, a) << std::endl;
    std::cout << "Max of integers: " << maxOne<int>(c, a) << std::endl;
    std::cout << "Max of strings: " << maxOne<std::string>(e, f) << std::endl;

    /********************************************************************************/

    // What if we want to compare different data types???

    // If we try to compare different data types without specifying the data type explicitly, we get an error.
    // std::cout << "Max of integers: " << maxOne(a, c) << std::endl; // Error
    // std::cout << "Max of doubles: " << maxOne(c, e) << std::endl; // Error

    // We can fix this by specifying the data type explicitly.
    std::cout << "Max of integers: " << maxOne<int>(a, c) << std::endl;
    std::cout << "Max of doubles: " << maxOne<double>(c, a) << std::endl;


    // Even if we specify the data type explicitly, we can get an error if the data types are not compatible.
    // std::cout << "Max of strings: " << maxOne<std::string>(e, a) << std::endl; // Error
    

    return 0;
}