#include <iostream>
#include <vector>
#include <algorithm>

int main()
{

    // 1. Lambda function to be used with STL algorithms (sort)
    std::vector<int> numbers = {1, 4, 2, 8, 5, 7};

    // Sort the numbers in ascending order
    std::sort(numbers.begin(), numbers.end());

    std::cout << " Sorted numbers in ascending order: ";
    for (int n : numbers)
    {
        std::cout << n << " ";
    }

    std::cout << std::endl;

    // Sort the numbers in descending order
    std::sort(numbers.begin(), numbers.end(), [](int a, int b)
              { return b < a; });

    std::cout << " Sorted numbers in descending order: ";
    for (int n : numbers)
    {
        std::cout << n << " ";
    }

    std::cout << std::endl << "**************************************************************" << std::endl;

    /****************************************************************************/

    // 2. Lambda function to be used with STL algorithms (find_if)

    // Find the first even number in the vector
    auto it = std::find_if(numbers.begin(), numbers.end(), [](int n)
                           { return n % 2 == 0; });

    if (it != numbers.end())
    {
        std::cout << "First even number: " << *it << std::endl;
    }
    else
    {
        std::cout << "No even number found" << std::endl;
    }

    // 3. Lambda function to be used with STL algorithms (for_each)

    // Print all the numbers in the vector
    std::cout << "Numbers: ";
    std::for_each(numbers.begin(), numbers.end(), [](int n)
                  { std::cout << n << " "; });

    std::cout << std::endl;

    // 4. Lambda function to be used with STL algorithms (transform)

    // Multiply each number by 2
    std::cout << "Numbers multiplied by 2: ";
    std::transform(numbers.begin(), numbers.end(), numbers.begin(), [](int n)
                   { return n * 2; });

    for (int n : numbers)
    {
        std::cout << n << " ";
    }

    std::cout << std::endl;
    

    return 0;
}

