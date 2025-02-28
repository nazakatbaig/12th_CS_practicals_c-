#include <iostream>
using namespace std;

float calculateAverage(int numbers[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }
    return static_cast<float>(sum) / size;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int* numbers = new int[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    float average = calculateAverage(numbers, n);
    cout << "The average is: " << average << endl;

    delete[] numbers;
    return 0;
}

