#include <iostream>
#include "classA.h"
#include "classB.h"
#include "ClassC.h"
#include "ClassD.h"



int main()
{
    std::cout << " ***** Implicit copy constructor Example ***** " << std::endl;
    ClassA class_a1(12, "Ahmed");
    class_a1.display();

    ClassA class_a2(class_a1);  // Copy constructor is called
    class_a2.display();         // Display the copied object

    std::cout << " ***** Explicit copy constructor Example ***** " << std::endl;
    ClassB class_b1(15, "Mahmoud");
    class_b1.display();

    ClassB class_b2(class_b1);
    class_b2.display();

    std::cout << " ***** Explicit copy constructor Example ***** " << std::endl;
    ClassC class_c1(10, "Adel");
    class_c1.display();


    ClassC class_c2(class_c1);
    delete class_c1.ptr;
    class_c1.ptr = nullptr; // Avoid dangling pointer by setting it to nullptr
    // Now, class_c2.ptr is dangling pointer because class_c1.ptr is deleted.
    // class_c1.display(); // This will cause undefined behavior if uncommented.
    // class_c2.display(); // This will cause undefined behavior if uncommented.

    std::cout << " ***** Explicit deep copy constructor Example ***** " << std::endl;
    ClassD class_d1(20, "3bzo");
    class_d1.display();


    ClassD class_d2(class_d1);
    delete class_d1.ptr;
    class_d1.ptr = nullptr;     // Avoid dangling pointer by setting it to nullptr
    // Now, class_cd.ptr is dangling pointer because class_c1.ptr is deleted.
    // class_d1.display(); // This will cause undefined behavior if uncommented as class_d1.ptr is deleted.
    class_d2.display(); // This will compile and run successfully because class_d2.ptr is doing deep copy.
    // class_d1 and class_d2 are independent objects, so modifying one does not affect the other.

    return 0;
}

// References:
// 1. https://www.geeksforgeeks.org/copy-constructor-in-cpp/





