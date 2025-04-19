#include <iostream>
using namespace std;


/*
    - Use public for things that should be visible and modifiable from outside the object—like configuration settings,
      or methods meant to be part of the object's interface.
*/

class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << "The " << brand << " is driving at " << speed << " km/h" << endl;
    }
};

int main() {
    Car myCar;

    // Because brand and speed are public, we can access and modify them directly
    myCar.brand = "Toyota";
    myCar.speed = 100;

    myCar.drive();

    return 0;
}
