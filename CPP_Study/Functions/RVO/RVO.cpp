#include <iostream>

using namespace std;

/*
    Return Value Optimization (RVO), a compiler optimization technique
    that eliminates unnecessary copying of objects when returning them
    from a function.

    In this example, we have a function that takes two strings and
    concatenates them. The function returns the concatenated string.

    - Inside the function addStrings(), a local string fullName is created.
    - This creates a temporary std::string in the function’s stack frame.
    - Normally, the return statement would create a copy when assigning to fullName in main().
    - However, the compiler can optimize this by constructing the return value directly in the memory location of fullName in main().
    - This eliminates the need for a copy, and the temporary object is constructed directly in the memory location of fullName.
    - This is Return Value Optimization (RVO).

    We can visualize this by printing the memory address of the fullName variable in the function and main().
*/

std::string addStrings(const std::string str1, const std::string str2) {
    std::string fullName = str1 + str2;
    cout << "&Full Name (in): " << &fullName << endl;

    return fullName;
}

int main() {

    std::string name1 = "Ahmed";
    std::string name2 = " Mahmoud";

    std::string fullName = addStrings(name1, name2);
    cout << "&Full Name (Out): " << &fullName << endl;

    cout << "Full Name: " << fullName << endl;

    return 0;
}