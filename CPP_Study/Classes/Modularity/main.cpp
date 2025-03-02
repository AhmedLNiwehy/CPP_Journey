#include <iostream>
#include "cylinder.h"

/*
    - Modularity is the process of breaking a program into smaller, more manageable pieces.
    - Modularity is a way to organize a program into separate, independent components that can be developed, tested, and maintained separately.
    - Modularity is a way to improve code readability, maintainability, and reusability.
    - Modularity is a way to reduce complexity by breaking a program into smaller, more manageable pieces.
    - Modularity is a way to improve code quality by making it easier to understand, test, and debug.
    - Modularity is a way to improve code scalability by making it easier to add new features and fix bugs.
    - Modularity is a way to improve code maintainability by making it easier to update and modify code.
    - Modularity is a way to improve code reusability by making it easier to reuse code in other projects.
    - Modularity is a way to improve code performance by making it easier to optimize code.
    - Modularity is a way to improve code portability by making it easier to move code to different platforms.
    - Modularity is a way to improve code security by making it easier to identify and fix security vulnerabilities.
    - Modularity is a way to improve code reliability by making it easier to identify and fix bugs.
    - Modularity is a way to improve code maintainability by making it easier to update and modify code.
    - Modularity is a way to improve code reusability by making it easier to reuse code in other projects.
    - Modularity is a way to improve code performance by making it easier to optimize code.
    - Modularity is a way to improve code portability by making it easier to move code to different platforms.
    - Modularity is a way to improve code security by making it easier to identify and fix security vulnerabilities.
    - Modularity is a way to improve code reliability by making it easier to identify and fix bugs.
    - Modularity is a way to improve code maintainability by making it easier to update and modify code.
    - Modularity is a way to improve code reusability by making it easier to reuse code in other projects.
    - Modularity is a way to improve code performance by making it easier to optimize code.
    - Modularity is a way to improve code portability by making it easier to move code to different platforms.
    - Modularity is a way to improve code security by making it easier to identify
*/

int main()
{

    Cylinder Cylinder_1(5, 5);

    std::cout << "Cylinder_1 volume: " << Cylinder_1.volume() << std::endl;

    return 0;
}