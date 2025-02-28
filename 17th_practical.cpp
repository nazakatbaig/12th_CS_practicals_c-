#include <iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    void display() {
        cout << "Data: " << data << endl;
    }

    void increment() {
        data++;
    }
};

int main() {
    MyClass obj1(5);
    MyClass obj2(10);

    obj1.display();
    obj2.display();

    obj1.increment();
    obj2.increment();

    obj1.display();
    obj2.display();

    return 0;
}

