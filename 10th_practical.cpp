#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        cout << "Result: " << add(num1, num2) << endl;
    } else if (operation == '-') {
        cout << "Result: " << subtract(num1, num2) << endl;
    } else if (operation == '*') {
        cout << "Result: " << multiply(num1, num2) << endl;
    } else if (operation == '/') {
        cout << "Result: " << divide(num1, num2) << endl;
    } else {
        cout << "Error: Invalid operator" << endl;
    }

    return 0;
}

