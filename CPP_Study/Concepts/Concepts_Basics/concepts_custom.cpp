#include <iostream>
#include <concepts>
#include <type_traits>


template <typename T>
concept Integral = std::is_integral_v<T>;

Integral auto  add (Integral auto a, Integral auto b)
{
    return (a + b);
}

template <typename T>
concept Multipliable  = requires(T a, T b)
{
    a * b; // Just makes sure the syntax is valid
};

template <typename T>
requires Multipliable <T>

T multipy(T a, T b)
{
    return (a * b);
}




int main() {
    
    int int_var1{5};
    int int_var2{10};

    std::string str1{"Hello"};
    std::string str2{"World"};


    auto result = add(int_var1, int_var2);

    std::cout << "int_var1 + int_var1: " << result << std::endl;
    //std::cout << "str1 + str2: " << add(str1, str2) << std::endl;

    result = multipy(int_var1, int_var2);

    std::cout << "int_var1 * int_var1: " << result << std::endl;
    //std::cout << "str1 * str2: " << multipy(str1, str2) << std::endl;

    return 0;
}