#include <iostream>
#include <concepts>

/*
    Concepts are a new feature in C++20 that allow you to specify constraints on template parameters.
    Concepts are a way to define requirements on template arguments, similar to how function overloading
    allows you to define requirements on function arguments.

    Concepts are used to specify requirements on template arguments, such as requiring a type to be an
    integral type or requiring a type to support certain operations.

    Concepts can be used to improve error messages by providing more specific error messages when a
    template argument does not meet the requirements specified by the concept.

    Concepts can be used to improve code readability by making the requirements on template arguments
    explicit in the code.

    Concepts can be used to improve code maintainability by allowing you to define requirements in one
    place and reuse them in multiple places.

    Concepts can be used to improve code safety by catching errors at compile time when a template
    argument does not meet the requirements specified by the concept.

    Concepts can be used to improve code performance by allowing the compiler to generate more efficient
    code when the requirements on template arguments are known at compile time.

    Concepts can be used to improve code documentation by making the requirements on template arguments
    explicit in the code.

    Concepts can be used to improve code testing by allowing you to write tests that check whether a
    template argument meets the requirements specified by the concept.

    Concepts can be used to improve code debugging by providing more specific error messages when a
    template argument does not meet the requirements specified by the concept.

    Concepts can be used to improve code profiling by allowing you to write code that takes advantage of
    the requirements specified by the concept.

    Concepts can be used to improve code optimization by allowing the compiler to generate more efficient
    code when the requirements on template arguments are known at compile time.

    Concepts can be used to improve code portability by allowing you to write code that works with
    different types that meet the requirements specified by the concept.

    Concepts can be used to improve code scalability by allowing you to write code that works with
    different types that meet the requirements specified by the concept.

    Concepts can be used to improve code reusability by allowing you to write code that works with
    different types that meet the requirements specified by the concept.

    Concepts can be used to improve code readability by making the requirements on template arguments
    explicit in the code.

    Concepts can be used to improve code maintainability by allowing you to define requirements in one
    place and reuse them in multiple places.
*/

// Syntax 1
template <typename T>
T add(T a, T b)
requires std::integral<T>
{
    return (a + b);
}

// Syntax 2
// template <typename T>
//     requires std::integral<T>
// T add(T a, T b)
//     requires std::integral<T>
// {
//     return (a + b);
// }

// Syntax 3
// template <std::integral T>
// T add(T a, T b)
//     requires std::integral<T>
// {
//     return (a + b);
// }

// Syntax 4
// auto add(std::integral auto a, std::integral auto b)

// {
//     return (a + b);
// }

int main()
{
    int int_var1{10};
    int int_var2{20};

    double double_var1{10.5};
    double double_var2{20.5};

    auto result = add(int_var1, int_var2);
    std::cout << "int_var1 + int_var2: " << result << std::endl;
    // std::cout << "double_var1 + double_var2: " << add(double_var1, double_var2) << std::endl;        // calling this function will cause an error

    return 0;
}