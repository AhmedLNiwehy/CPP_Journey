#include <iostream>

/*
    A template is a simple very powerful feature in C++. The simple idea is to pass the data type as a parameter
    so that we don’t need to write the same code for different data types.

    C++ adds two new keywords to support templates: ‘template’ and ‘typename’.
    The second keyword can always be replaced by the keyword ‘class’.

    Syntax:
    template <class T>
    T func(T a, T b) {
        return a + b;
    }

    The above code defines a template function that can accept any data type.
    The compiler generates the appropriate code for the data type that is passed as a parameter.

    The template function can also accept multiple data types.
    Syntax:
    template <class T, class U>
    T func(T a, U b) {
        return a + b;
    }

    The above code defines a template function that can accept two different data types.
    The compiler generates the appropriate code for the data types that are passed as parameters.

    The template function can also accept a default value.
    Syntax:
    template <class T = int>
    T func(T a, T b) {
        return a + b;
    }

    The above code defines a template function that can accept any data type.
    If the data type is not passed, the default data type is int.
    The compiler generates the appropriate code for the data type that is passed as a parameter.

    How Do Templates Work?
    When the compiler encounters a template function, it generates a new function specifically for the data type
    that is passed as a parameter.
    The compiler generates the appropriate code for the data type that is passed as a parameter.

    - Templates are expanded at compiler time. This is like macros. The difference is,
    that the compiler does type-checking before template expansion. The idea is simple,
    source code contains only function/class, but compiled code may contain multiple copies
    of the same function/class.
*/

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using function template
    std::cout << "Addition of integers: " << add<int>(3, 4) << std::endl;
    std::cout << "Addition of doubles: " << add<double>(3.5, 4.5) << std::endl;

    return 0;
}


/*
    You can you this tool: https://cppinsights.io/ to see the generated code by the compiler.
    Just copy and paste the code and see the generated code.

    An alternative way to see the call stack is to enter a debug mode in your IDE and see the call stack.
    You can see the generated code by the compiler.
*/