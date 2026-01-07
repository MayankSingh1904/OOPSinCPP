#include <iostream>
using namespace std;

// Base class (Level 1)
class Vehicle {
public:
    int wheels = 4;

    void showWheels() {
        cout << "Wheels: " << wheels << endl;
    }
};

// Derived class (Level 2)
class Car : public Vehicle {
public:
    int speed = 120;

    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

// Derived class (Level 3)
class SportsCar : public Car {
public:
    string mode = "Sport";

    void showMode() {
        cout << "Driving mode: " << mode << endl;
    }
};

int main() {
    // Object of most derived class
    SportsCar sc;

    // Accessing variables from all levels
    cout << sc.wheels << endl;   // Vehicle
    cout << sc.speed << endl;    // Car
    cout << sc.mode << endl;     // SportsCar

    // Accessing methods from all levels
    sc.showWheels();   // Vehicle
    sc.showSpeed();    // Car
    sc.showMode();     // SportsCar

    return 0;
}
