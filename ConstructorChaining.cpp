#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    int age;
    string course;

public:
    // 4-parameter constructor
    Student(int i, string n, int a, string c) {
        this->id = i;
        this->name = n;
        this->age = a;
        this->course = c;
        cout << "4-param constructor called: "
             << id << ", " << name << ", " << age << ", " << course << endl;
    }

    // 3-parameter constructor calls 4-param constructor
    Student(int i, string n, int a) : Student(i, n, a, "Unknown") {
        cout << "3-param constructor called: "
             << this->id << ", " << this->name << ", " << this->age
             << ", " << this->course << endl;
    }

    // 2-parameter constructor calls 3-param constructor
    Student(int i, string n) : Student(i, n, 0) {
        cout << "2-param constructor called: "
             << this->id << ", " << this->name << ", " << this->age
             << ", " << this->course << endl;
    }
};

int main() {
    cout << "Creating student with 2 parameters:" << endl;
    Student s1(101, "Tony");

    cout << "\nCreating student with 3 parameters:" << endl;
    Student s2(102, "Alice", 22);

    cout << "\nCreating student with 4 parameters:" << endl;
    Student s3(103, "Bob", 23, "IT");

    return 0;
}
