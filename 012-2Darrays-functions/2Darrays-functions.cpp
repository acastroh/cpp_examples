/* Author: Alberto Cahdez
 * Created: Jan 16, 2022
 * Updated: Jan 16, 2022
 * Program: 2Darrays-functions
 * Description: Ask for 9 float values to be stored in a 3x3 float bidimensional array, display it.
 * Then, call a function that receives the matrix as an input parameter and display it transposed.
 * Example:
 * 8       9.2     10
 * 5.1     4.6     7.6
 * 2.2     5       3
 * Transposed:
 * 8       5.1     2.2
 * 9.2     4.6     5
 * 10      7.6     3
 */

#include <iostream>

using namespace std;

void transpose(float matrix[][3], int rows, int columns);

int main()
{
    int const columns = 3;
    int const rows = 3;
    float matrix[rows][columns] = { 0 };

    cout << "2Darrays-functions!\n";
    cout << "----------------------\n";
    for (int i = 0; i < rows; i++) {
        cout << "Enter the values for the " << columns << " columns in row " << i << ": ";
        for (int j = 0; j < columns; j++)
            cin >> matrix[i][j];
    }
    cout << "Matrix\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
    transpose(matrix, rows, columns);
}

void transpose(float matrix[][3], int rows, int columns) {
    cout << "Transposed:\n";
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}
