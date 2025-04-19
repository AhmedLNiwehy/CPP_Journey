#include <iostream>
#include <string>

/*
    - Abstract classes are classes that cannot be instantiated on their own and are meant to be subclassed.
    - They contain at least one pure virtual function, which is a function declared with = 0 in its declaration.
    - Abstract classes are used to define a **common interface** for derived classes, allowing for polymorphism.
    - Derived classes must implement the pure virtual functions to be instantiated.
    - This means that if the derived class does not implement the pure virtual function, this will result in a compilation error.
    - Abstract classes can also contain concrete (non-virtual) functions and member variables.

*/

class Sensor {      // Abstract class
    public:
        virtual void readData() = 0;            // Pure virtual function (abstract method)
};
    
class TemperatureSensor : public Sensor {       // Concrete class:  must implement readData()
    public:
        void readData() override {
        // read temp sensor register
        std::cout << "Reading temperature sensor data..." << std::endl;
        }
};
    
class PressureSensor : public Sensor {
    public:
        void readData() override {
        // read pressure sensor register
        std::cout << "Reading pressure sensor data..." << std::endl;
        }
};

int main() {
    // Sensor* sensor0 = new Sensor(); // This will cause a compilation error because Sensor is an abstract class.
    Sensor* sensor1 = new TemperatureSensor();
    Sensor* sensor2 = new PressureSensor();
    
    sensor1->readData(); // Calls readData() of TemperatureSensor
    sensor2->readData(); // Calls readData() of PressureSensor
    
    delete sensor1;
    delete sensor2;
    
    return 0;
}
// This code demonstrates the use of an abstract class (Sensor) and its derived classes (TemperatureSensor and PressureSensor).
// The readData() method is declared as a pure virtual function in the Sensor class, making it an abstract class.
// The derived classes implement the readData() method, allowing polymorphic behavior when calling the method on a Sensor pointer.
// The main function creates instances of the derived classes and calls their readData() methods, demonstrating polymorphism.
// The code also includes proper memory management by deleting the dynamically allocated objects at the end of the main function.
// This ensures that there are no memory leaks in the program.
// The use of virtual functions and inheritance allows for a flexible and extensible design, where new sensor types can be added easily by creating new derived classes.
    