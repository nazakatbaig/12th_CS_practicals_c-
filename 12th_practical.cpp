#include <iostream>
#include <cmath>

using namespace std;

double volume_cylinder(double radius, double height) {
    return M_PI * radius * radius * height;
}

double volume_sphere(double radius) {
    return (4.0 / 3.0) * M_PI * pow(radius, 3);
}

double volume_cube(double side) {
    return side * side * side;
}

int main() {
    double radius, height, side;

    cout << "Enter radius and height for cylinder: ";
    cin >> radius >> height;
    cout << "Volume of cylinder: " << volume_cylinder(radius, height) << endl;

    cout << "Enter radius for sphere: ";
    cin >> radius;
    cout << "Volume of sphere: " << volume_sphere(radius) << endl;

    cout << "Enter side length for cube: ";
    cin >> side;
    cout << "Volume of cube: " << volume_cube(side) << endl;

    return 0;
}

