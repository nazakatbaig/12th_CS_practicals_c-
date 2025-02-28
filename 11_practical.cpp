#include <iostream>
#include <cmath>

using namespace std;

double areaOfCircle(double radius) {
    return M_PI * radius * radius;
}

double areaOfTriangle(double base, double height) {
    return 0.5 * base * height;
}

double areaOfParallelogram(double base, double height) {
    return base * height;
}

int main() {
    char shape;
    double radius, base, height;

    cout << "Enter the shape (c for circle, t for triangle, p for parallelogram): ";
    cin >> shape;

    if (shape == 'c') {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of the circle: " << areaOfCircle(radius) << endl;
    } else if (shape == 't') {
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of the triangle: " << areaOfTriangle(base, height) << endl;
    } else if (shape == 'p') {
        cout << "Enter the base and height of the parallelogram: ";
        cin >> base >> height;
        cout << "Area of the parallelogram: " << areaOfParallelogram(base, height) << endl;
    } else {
        cout << "Invalid shape entered." << endl;
    }

    return 0;
}

