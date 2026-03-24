#include <iostream>
using namespace std;

// User-defined class
class Point {
public:
    int x, y;

    // Constructor
    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    // Display function
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

// -------- Function Overloading for Integers --------
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

// -------- Function Overloading for Point --------
Point add(Point p1, Point p2) {
    return Point(p1.x + p2.x, p1.y + p2.y);
}

Point subtract(Point p1, Point p2) {
    return Point(p1.x - p2.x, p1.y - p2.y);
}

Point multiply(Point p1, Point p2) {
    return Point(p1.x * p2.x, p1.y * p2.y);
}

// -------- Main Function --------
int main() {
    // Integer operations
    int a = 10, b = 5;

    cout << "Integer Operations:" << endl;
    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;

    // Point operations
    Point p1(2, 3), p2(4, 5);

    cout << "\nPoint Operations:" << endl;

    Point p_add = add(p1, p2);
    cout << "Addition: ";
    p_add.display();

    Point p_sub = subtract(p1, p2);
    cout << "Subtraction: ";
    p_sub.display();

    Point p_mul = multiply(p1, p2);
    cout << "Multiplication: ";
    p_mul.display();

    return 0;
}
