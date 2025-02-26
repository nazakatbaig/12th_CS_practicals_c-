#include <iostream>
using namespace std;

const int SIZE = 2; // Defining the matrix size for simplicity

// Function to add two matrices
void addMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

// Function to multiply two matrices
void multiplyMatrices(int matrix1[SIZE][SIZE], int matrix2[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            result[i][j] = 0; // Initialize the result matrix
            for (int k = 0; k < SIZE; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];

    cout << "Enter elements for the first 2x2 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements for the second 2x2 matrix:\n";
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix2[i][j];
        }
    }

    // Matrix addition
    addMatrices(matrix1, matrix2, result);
    cout << "Sum of matrices:\n";
    printMatrix(result);

    // Matrix subtraction
    subtractMatrices(matrix1, matrix2, result);
    cout << "Difference of matrices:\n";
    printMatrix(result);

    // Matrix multiplication
