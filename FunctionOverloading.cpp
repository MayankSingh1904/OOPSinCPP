#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(2, 3) << endl;        // calls int, int
    cout << calc.add(2, 3, 4) << endl;     // calls int, int, int
    cout << calc.add(2.5, 3.5) << endl;    // calls double, double

    return 0;
}
