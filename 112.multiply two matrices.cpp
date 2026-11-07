//112. Write a C++ program to multiply two matrices.

#include<iostream>
using namespace std;
int main() {
    int rows1, cols1, rows2, cols2, i, j, k;
    int matrix1[100][100], matrix2[100][100], product[100][100];

    // 1. Get the dimensions of the first matrix
    cout << "Enter the number of rows of first matrix: ";
    cin >> rows1;

    cout << "Enter the number of columns of first matrix: ";
    cin >> cols1;

    // 2. Get the dimensions of the second matrix
    cout << "Enter the number of rows of second matrix: ";
    cin >> rows2;

    cout << "Enter the number of columns of second matrix: ";
    cin >> cols2;

    // Matrix multiplication is possible only when
    // columns of first matrix = rows of second matrix
    if (cols1 != rows2) {
        cout << "\nMatrix multiplication is not possible." << endl;
        return 0;
    }

    // 3. Input elements for the first matrix
    cout << "\nEnter elements for the first matrix:\n";
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // 4. Input elements for the second matrix
    cout << "\nEnter elements for the second matrix:\n";
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // 5. Initialize product matrix
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }

    // 6. Perform matrix multiplication
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // 7. Display the result matrix
    cout << "\nResultant Product Matrix:\n";
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            cout << product[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

