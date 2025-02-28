#include <iostream>
using namespace std;

int main() {
    int var = 20; // Declare an integer variable
    int* ptr = &var; // Declare a pointer variable and assign the address of var

    cout << "Value of var: " << var << endl; // Output the value of var
    cout << "Address of var: " << &var << endl; // Output the address of var
    cout << "Value of ptr: " << ptr << endl; // Output the value of ptr (address of var)
    cout << "Value pointed to by ptr: " << *ptr << endl; // Output the value pointed to by ptr

    return 0;
}

