#include <iostream>
using namespace std;

int main() {
    int variable = 42;
    int* pointer = &variable;

    cout << "The memory address of variable is: " << pointer << endl;
    return 0;
}

