#include <iostream>
using namespace std;
// Base class
class Person {
public:
    string name;
    Person(string n) : name(n) {
        cout << "Person constructor called" << endl;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
};
// ==========================
// MULTI-LEVEL INHERITANCE
// Person -> Student -> CollegeStudent
// ==========================
class Student : public Person {
public:
    int rollNo;
    Student(string n, int r) : Person(n), rollNo(r) {
        cout << "Student constructor called" << endl;
    }

    void showRoll() {
        cout << "Roll No: " << rollNo << endl;
    }
};
class CollegeStudent : public Student {
public:
    string collegeName;
    CollegeStudent(string n, int r, string c) : Student(n, r), collegeName(c) {
        cout << "CollegeStudent constructor called" << endl;
    }
    void showCollege() {
        cout << "College: " << collegeName << endl;
    }
};
// ==========================
// MULTIPLE INHERITANCE
// Teacher + Athlete -> Coach
// ==========================
class Teacher {
public:
    string subject;
    Teacher(string s) : subject(s) {
        cout << "Teacher constructor called" << endl;
    }
    void showSubject() {
        cout << "Subject: " << subject << endl;
    }
};
class Athlete {
public:
    string sport;
    Athlete(string sp) : sport(sp) {
        cout << "Athlete constructor called" << endl;
    }
    void showSport() {
        cout << "Sport: " << sport << endl;
    }
};
// Multiple inheritance
class Coach : public Teacher, public Athlete {
public:
    Coach(string s, string sp) : Teacher(s), Athlete(sp) {
        cout << "Coach constructor called" << endl;
    }
    void showAll() {
        showSubject();
        showSport();
    }
};
int main() {
    cout << "=== Multi-Level Inheritance ===" << endl;
    CollegeStudent cs("Tony", 101, "MIT");
    cs.showName();
    cs.showRoll();
    cs.showCollege();
    cout << "\n=== Multiple Inheritance ===" << endl;
    Coach c("Math", "Football");
    c.showAll();
    return 0;
}
