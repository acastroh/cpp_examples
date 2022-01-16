/* Author: Alberto Cahdez
 * Created: Jan 16, 2022
 * Updated: Jan 16, 2022
 * Program: 2Darrays
 * Description: Create a bidimensional array to store the 4-rows and 3-columns float matrix below, and display it. Example: 
    1.1     6.3     1
    2       5.1     7 
    1.3     3       2.2 
    1.5     4.8     8.3
 */

#include <iostream>

using namespace std;

int main()
{
    float matrix[4][3] = { 1.1, 6.3, 1, 2, 5.1, 7, 1.3, 3, 2.2, 1.5, 4.8, 8.3 };
    cout << "2Darrays!\n";
    cout << "----------\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}
