#include <iostream>
using namespace std;
class Point {
public:
    int x, y;
    // Constructor
    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }
    // Overload + operator
    Point operator+(const Point& p) {
        // Create a new Point by adding current object and other object
        Point temp;
        temp.x = this->x + p.x;
        temp.y = this->y + p.y;
        return temp;
    }
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p1(2, 3);  // First point
    Point p2(4, 5);  // Second point
    Point p3 = p1 + p2;  // Calls the overloaded + operator
                          // Internally: temp.x = 2+4, temp.y = 3+5
    cout << "p1 + p2 = ";
    p3.display();        // Output: (6, 8)
    return 0;
}
