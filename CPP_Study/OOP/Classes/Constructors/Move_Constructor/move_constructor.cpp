#include <iostream>
#include <string>
#include <cstring>


/*
    - A move constructor allows an object to take ownership of the resources of a temporary (rvalue) object instead of copying them.
    - It enables "moving" resources (like heap memory, file handles, sockets, etc.) from one object to another, avoiding costly deep copies.
    
    - Syntax of Move Constructor:
        ClassName(ClassName&& other);
            . Takes an rvalue reference (ClassName&&).
            . Steals the resource, and usually sets the source (other) to a safe default

*/

class MyString {
private:
    char* data;

public:
    // Constructor
    MyString(const char* str) {
        data = new char[strlen(str) + 1];
        strcpy(data, str);
        std::cout << "Constructed: " << data << std::endl;
    }

    // Destructor
    ~MyString() {
        delete[] data;
        std::cout << "Destroyed\n";
    }

    // Move Constructor
    MyString(MyString&& other) noexcept {
        data = other.data;        // Steal the pointer
        other.data = nullptr;     // Leave other in a valid state
        std::cout << "Moved\n";
    }

    void print() const {
        std::cout << (data ? data : "null") << std::endl;
    }
};

int main() {
    MyString a = MyString("Hello");
    MyString b = std::move(a);  // Triggers move constructor
    b.print();
    a.print();  // Now a is in a "moved-from" state

    return 0;
}

/*
    Best Practices:
    - Always set the moved-from object to a safe state (e.g., nullptr) in the move constructor.
    - Use `noexcept` to indicate that the move constructor does not throw exceptions. This can help with performance optimizations. 
    - Use `std::move` to indicate that an object can be "moved from" rather than copied.
*/