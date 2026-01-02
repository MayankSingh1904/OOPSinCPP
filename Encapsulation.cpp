//encapsulation is basically binding class data members to class methods withing one class.
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks;

public:
    // Constructor with parameters using `this` to resolve shadowing
    Student(int id, string name, float marks) {
        this->id = id;       // this-> distinguishes object member from parameter
        this->name = name;
        this->marks = marks;
    }

    // Display method
    void display() {
        cout << "ID: " << id 
             << ", Name: " << name 
             << ", Marks: " << marks << endl;
    }
};

int main() {
    // Create object
    Student s1(101, "Tony", 95.5);

    s1.display();

    // Another object
    Student s2(202, "Gigachu", 88.0);
    s2.display();

    return 0;
}
