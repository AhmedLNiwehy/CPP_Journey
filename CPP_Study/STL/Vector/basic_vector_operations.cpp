#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int main() {

    // Create a vector of integers
    std::vector<int> vec;

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    /*
        Accessing elements in a vector:

        Elements in a vector can be accessed using the [] operator or the at() function.
        The [] operator is faster but does not perform bounds checking.
        The at() function is slower but performs bounds checking.
    */
    std::cout << "Element at index 0: " << vec[0] << std::endl;
    std::cout << "Element at index 1: " << vec[1] << std::endl;
    std::cout << "Element at index 2: " << vec[2] << std::endl;

    // std::cout << "Element at index 3: " << vec[3] << std::endl;         // This will print garbage value ( no bounds checking )
    // std::cout << "Element at index 3: " << vec.at(3) << std::endl;      // This will throw an out_of_range exception ( bounds checking )

    std::cout << " ********************************************************* " << std::endl;
    /**************************************************************************************/

    // Updating Elements in a Vector
    
    // Update the element at index 1
    vec[1] = 100;
    
    // Update the element at index 2
    vec.at(2) = 200;

    // Print the updated elements
    for(int i = 0; i < vec.size(); i++) {
        std::cout << "Element at index " << i << ": " << vec.at(i) << std::endl;
    }

    std::cout << " ********************************************************* " << std::endl;
    /**************************************************************************************/

    // Inserting Elements in a Vector

    // Insert an element at the beginning
    vec.insert(vec.begin(), 5);         // vec.insert(vec.begin() + 0, 5);  

    // Insert an element at the end
    vec.push_back(300);                 // same as vec.insert(vec.end(), 300);

    // Insert an element at index 2
    vec.insert(vec.begin() + 2, 50);    

    // Print the updated elements
    for(int i = 0; i < vec.size(); i++) {
        std::cout << "Element at index " << i << ": " << vec.at(i) << std::endl;
    }

    std::cout << " ********************************************************* " << std::endl;
    /**************************************************************************************/

    // The insert() function takes a range of elements to insert.

    // Create a vector of integers
    std::vector<int> vec1 = {1, 2, 3, 4, 5};

    vec1.insert(vec1.begin() + 2, vec.begin(), vec.end());  // Insert the elements of vec into vec1 at index 2

    // Print the updated elements
    for(int i = 0; i < vec1.size(); i++) {
        std::cout << "Element at index " << i << ": " << vec1.at(i) << std::endl;
    }

    std::cout << " ********************************************************* " << std::endl;
    /**************************************************************************************/

    // Using vector emplace() function
    // The emplace() function constructs the element in place at the specified position.

    // The vector emplace() function is also used to insert the element in the vector just like vector insert()
    // but this function construct the element to be inserted directly in the vector.
    // This avoids creating the unnecessary copies of the element. This process is also called emplacing
    // instead of inserting.


    // Create a vector of integers
    std::vector<int> vec2 = {1, 2, 3, 4, 5};

    // Insert an element at index 2
    vec2.emplace(vec2.begin() + 2, 50);

    // Insert an element at last
    vec2.emplace_back(300);

    // Print the updated elements
    for(int i = 0; i < vec2.size(); i++) {
        std::cout << "Element at index " << i << ": " << vec2.at(i) << std::endl;
    }

    std::cout << " ********************************************************* " << std::endl;
    /**************************************************************************************/

    // Deleting Elements in a Vector

    // Erase the element at index 2
    vec2.erase(vec2.begin() + 2);

    // Erase the last element
    vec2.pop_back();

    // Print the updated elements
    for(int i = 0; i < vec2.size(); i++) {
        std::cout << "Element at index " << i << ": " << vec2.at(i) << std::endl;
    }

    std::cout << " ********************************************************* " << std::endl;

    // Deleting element with specific value
    // Erase the element with value 5
    vec2.erase(find(vec2.begin(), vec2.end(), 10));
    // Print the updated elements
    for(int i = 0; i < vec2.size(); i++) {
        std::cout << "Element at index " << i << ": " << vec2.at(i) << std::endl;
    }

    std::cout << " ********************************************************* " << std::endl;
    /**************************************************************************************/

    return 0;
}