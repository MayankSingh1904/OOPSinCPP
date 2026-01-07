#include <iostream>
using namespace std;

class Vehicle {
public:
    void start() {   // NOT virtual
        cout << "Vehicle starting" << endl;
    }
};

class Car : public Vehicle {
public:
    void start() override {   // hides base class method
        cout << "Car starting" << endl;
    }
};

int main() {
    Car c;
    c.start();   // calls Car::start()
    return 0;
    Vehicle* ptr=&c;
    ptr->start();  // calls Vehicle::start() because start() is NOT virtual
}
