#include <iostream>
using namespace std;

/*
    
    - Use protected for things that should be visible to derived classes but not to the outside world.
    - This allows controlled inheritance, where child classes can use and manipulate internal data of the parent without exposing it to the outside world.
*/

// Base class
class Animal {
protected:
    string name;                        // Accessible in derived classes, but NOT from outside

public:
    void setName(const string& newName) {
        name = newName;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << name << " says: Woof!" << endl;     // Can access protected member
    }
};

int main() {
    Dog myDog;
    myDog.setName("Buddy");

    // myDog.name = "Charlie";      Error! name is protected

    myDog.bark();                   // Works, because bark() is inside derived class

    return 0;
}
