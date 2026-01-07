#include <iostream>
using namespace std;

// Abstract class
class Vehicle {
public:
    virtual void start() = 0;  // pure virtual function
    virtual void stop() = 0;   // another pure virtual function
};

// Derived class
class Car : public Vehicle {
public:
    void start() override {
        cout << "Car engine started" << endl;
    }

    void stop() override {
        cout << "Car stopped" << endl;
    }
};

// Another derived class
class Bike : public Vehicle {
public:
    void start() override {
        cout << "Bike engine started" << endl;
    }

    void stop() override {
        cout << "Bike stopped" << endl;
    }
};

int main() {
    // Vehicle v;  // ❌ ERROR! Cannot instantiate abstract class

    Car c;
    Bike b;

    c.start();
    c.stop();

    b.start();
    b.stop();

    // Polymorphic usage
    Vehicle* v1 = &c;
    Vehicle* v2 = &b;

    v1->start();  // Calls Car::start()
    v2->start();  // Calls Bike::start()

    return 0;
}
// Virtual = optional runtime polymorphism; Pure virtual = mandatory implementation in derived class and creates an abstract class.
