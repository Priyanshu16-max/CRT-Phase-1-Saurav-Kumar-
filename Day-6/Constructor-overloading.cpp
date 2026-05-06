#include <iostream>
using namespace std;

class Area {
    double area;

public:
    // Constructor for circle
    Area(double r) {
        area = 3.14 * r * r;
        cout << "Area of Circle: " << area << endl;
    }

    // Constructor for rectangle
    Area(double l, double b) {
        area = l * b;
        cout << "Area of Rectangle: " << area << endl;
    }

    // Constructor for triangle
    Area(double base, double height, int x) {
        area = 0.5 * base * height;
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    Area c(5);          // Circle
    Area r(4, 6);       // Rectangle
    Area t(3, 8, 1);    // Triangle (extra int to differentiate)

    return 0;
}