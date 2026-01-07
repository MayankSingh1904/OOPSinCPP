#include <iostream>
using namespace std;
class Student {
private:
    int id;
    string name;
public:
    // Constructor
    Student(int id, string name) {
        this->id = id;
        this->name = name;
    }
    // Getter for id
    int getId() {
        return id;
    }
    // Setter for id
    void setId(int id) {
        this->id = id;
    }
    // Getter for name
    string getName() {
        return name;
    }
    // Setter for name
    void setName(string name) {
        this->name = name;
    }
};
int main() {
    // Object creation
    Student s1(1, "Tony");
    // Using getters
    cout << "ID: " << s1.getId() << endl;
    cout << "Name: " << s1.getName() << endl;
    // Using setters
    s1.setId(2);
    s1.setName("Jarvis");
    cout << "\nAfter update:" << endl;
    cout << "ID: " << s1.getId() << endl;
    cout << "Name: " << s1.getName() << endl;
    return 0;
}
