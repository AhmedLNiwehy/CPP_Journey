#include <iostream>
#include <functional>
#include <vector>

/*
    - Lambda functions are anonymous functions that can be defined to be used as callbacks.
    - They are often used for short-lived operations, such as event handling or passing a function as an argument to another function.

    - The following example demonstrates how to use a lambda function as a callback for processing data.
    - The Processor class has a method process that takes a vector of integers and a callback function as arguments.    
    - The process method processes each item in the vector and calls the callback function with the processed item.
    - The callback function is defined as a lambda function in the main function and is passed to the process method.
    - The lambda function prints the processed item to the console.
    - This example demonstrates how to use lambda functions as callbacks in C++.
*/

class Processor {
public:
    void process(const std::vector<int> &data, std::function <void(int)> callback)
    {
        for (const auto &item : data) {
            // Process the item (for example, multiply by 2)
            int processedItem = item * 2;
            // Call the callback function with the processed item
            callback(processedItem);
        }
    }
};

int main()
{
    Processor processor;
    std::vector<int> data = {1, 2, 3, 4, 5};

    // Define a lambda function to handle the processed data
    auto callback = [](int processedItem) {
        std::cout << "Processed item: " << processedItem << std::endl;
    };

    // Call the process method with the data and the lambda function
    processor.process(data, callback);

    return 0;
}
