//113. Write a C++ program to find the transpose of a matrix.

#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;
    int matrix[100][100], transpose[100][100];

    // 1. Get the dimensions of the matrix
    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
    cin >> cols;

    // 2. Input elements of the matrix
    cout << "\nEnter elements for the matrix:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // 3. Find the transpose of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 4. Display the original matrix
    cout << "\nOriginal Matrix:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // 5. Display the transpose matrix
    cout << "\nTranspose Matrix:\n";
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            cout << transpose[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
