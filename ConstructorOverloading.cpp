#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    // Default constructor
    Student() {
        id = 0;
        name = "Unknown";
    }

    // Parameterized constructor (1 parameter)
    Student(int i) {
        id = i;
        name = "Unknown";
    }

    // Parameterized constructor (2 parameters)
    Student(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;                 // Calls default constructor
    Student s2(101);            // Calls 1-parameter constructor
    Student s3(102, "Tony");    // Calls 2-parameter constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
