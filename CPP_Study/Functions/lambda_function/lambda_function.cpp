#include <iostream>

using namespace std;

int main() {

    /*
        Lambda functions are a feature introduced in C++11 that allow you to define
        anonymous functions in your code. They are useful for writing short, simple
        functions that don’t need a separate name or declaration.

        Lambda functions are defined using the following syntax:

        [capture list] (parameter list) -> return type {
            function body
        };

        - The capture list specifies which variables from the enclosing scope are accessible inside the lambda function.
        - The parameter list specifies the parameters that the lambda function takes.
        - The return type specifies the return type of the lambda function.
        - The function body contains the code that the lambda function executes.

        In this example, we define a lambda function that takes two integers and returns their sum.
        We then call the lambda function with two arguments and print the result.
    */

    // Define a lambda function that takes two integers and returns their sum
    auto sum = [](int a, int b) -> int {
        return a + b;
    };

    // Call the lambda function with two arguments
    int result = sum(10, 20);

    // Print the result
    cout << "Result: " << result << endl;

    /*
        Capturing Variables in Lambda Functions:

        Lambda functions can capture variables from the enclosing scope by value or by reference.
        The capture list specifies which variables are captured and how they are captured.

        - By value: [=] captures all variables by value.
        - By reference: [&] captures all variables by reference.
        - By value (specific variables): [a, b] captures variables a and b by value.
        - By reference (specific variables): [&a, &b] captures variables a and b by reference.

        In this example, we define a lambda function that captures a variable from the enclosing scope
        and increments it by a specified amount. We then call the lambda function and print the result.

        Note: The variable being captured must be in scope when the lambda function is called.

    */

    // Define a variable to capture in the lambda function
    int value = 5;

    // Define a lambda function that captures the variable and increments it by a specified amount
    auto increment = [&value](int amount) {
        value += amount;
    };

    increment(10);

    // Print the updated value
    cout << "Updated Value: " << value << endl;


    return 0;
}