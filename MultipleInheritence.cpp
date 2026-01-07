#include <iostream>
using namespace std;

// First base class
class Engine {
public:
    int horsepower = 150;

    void startEngine() {
        cout << "Engine started with " << horsepower << " HP" << endl;
    }
};

// Second base class
class MusicSystem {
public:
    int speakers = 4;

    void playMusic() {
        cout << "Playing music on " << speakers << " speakers" << endl;
    }
};

// Derived class
class Car : public Engine, public MusicSystem {
public:
    void drive() {
        cout << "Car is driving" << endl;
    }
};

int main() {
    // Object of derived class
    Car c;

    // Accessing variables from base classes
    cout << "Horsepower: " << c.horsepower << endl;
    cout << "Speakers: " << c.speakers << endl;

    // Accessing methods from base classes
    c.startEngine();
    c.playMusic();

    // Own method
    c.drive();

    return 0;
}
