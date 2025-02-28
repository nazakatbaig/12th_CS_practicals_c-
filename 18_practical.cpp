#include <iostream>
using namespace std;

class MyClass {
private:
    int privateVar;

public:
    MyClass(int value) : privateVar(value) {}

    void display() {
        cout << "Private Variable: " << privateVar << endl;
    }
};

int main() {
    MyClass obj(10);
    obj.display();
    return 0;
}

