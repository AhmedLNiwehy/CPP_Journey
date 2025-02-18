** Summary of Function Templates **

    - Function Templates as Blueprints
        Function templates act as blueprints for generating function instances.
        The compiler creates actual function definitions when you call the function with specific arguments.

    - Type Matching in Function Templates
        If the template parameters are of the same type (e.g., T and T), the arguments must also match.
        Otherwise, a compiler error will occur.

    - Template Instances and Their Limitations
        Template instances do not always behave as expected.
        A common issue arises when using function templates with pointers.

Example: Using Function Templates with Pointers

    Setting Up Variables
        Define two integer variables:

    int x = 5;
    int y = 7;

Creating Pointer Variables

    Initialize pointers to these integers:

    int* px = &x;
    int* py = &y;

Calling the Template Function with Pointers

    Pass the pointers to a function template (e.g., maximum(px, py)).

What the Compiler Does

    The compiler generates a template instance where T is replaced with int*:

        int* maximum(int* a, int* b) { return (a > b) ? a : b; }

        Here, the function is comparing pointer values (i.e., memory addresses), not the values stored at those addresses.

    The Problem
        Instead of comparing the integer values (5 and 7), the function compares the memory addresses of x and y.
        This might not yield the expected result if your goal is to compare the actual integers.

Solution: Specialization or Dereferencing

To compare the actual values, you can modify the function to dereference the pointers:

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Specialization for pointers
template <typename T>
T maximum(T* a, T* b) {
    return (*a > *b) ? *a : *b;
}

// Calling the function
int maxValue = maximum(px, py); // Compares values instead of addresses

This ensures that when you pass pointers, the function compares the values stored at those addresses rather than the pointers themselves.