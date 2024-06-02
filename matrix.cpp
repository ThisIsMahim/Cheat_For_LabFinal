#include <iostream>
using namespace std;

const int MAX = 100;

// Function to input a matrix
void inputMatrix(int matrix[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][MAX], int rows, int cols, const string& message) {
    cout << message << "\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to add two matrices
void addMatrix(int A[][MAX], int B[][MAX], int C[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printMatrix(C, rows, cols, "Addition of the matrices:");
}

// Function to subtract two matrices
void subtractMatrix(int A[][MAX], int B[][MAX], int C[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    printMatrix(C, rows, cols, "Subtraction of the matrices:");
}

// Function to multiply two matrices
void multiplyMatrix(int A[][MAX], int B[][MAX], int C[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < cols; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printMatrix(C, rows, cols, "Multiplication of the matrices:");
}

// Function to find the transpose of a matrix
void transposeMatrix(int A[][MAX], int rows, int cols) {
    int transposed[MAX][MAX];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = A[i][j];
        }
    }
    printMatrix(transposed, cols, rows, "Transpose of the matrix:");
}

// Wrapper function to handle matrix operations
void performMatrixOperation(int A[][MAX], int B[][MAX], int C[][MAX], int rows, int cols, char op) {
    switch(op) {
        case '+':
            addMatrix(A, B, C, rows, cols);
            break;
        case '-':
            subtractMatrix(A, B, C, rows, cols);
            break;
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns for matrices: ";
    cin >> rows >> cols;

    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    cout << "Enter elements of matrix A:\n";
    inputMatrix(A, rows, cols);

    cout << "Enter elements of matrix B:\n";
    inputMatrix(B, rows, cols);

    // Addition
    performMatrixOperation(A, B, C, rows, cols, '+');

    // Subtraction
    performMatrixOperation(A, B, C, rows, cols, '-');

    // Multiplication
    multiplyMatrix(A, B, C, rows, cols);

    // Transpose
    transposeMatrix(A, rows, cols);

    return 0;
}
