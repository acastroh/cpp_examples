/* 
 * Author: Alberto Cahdez
 * Created: Jan 16, 2021
 * Updated: Jan 16, 2021
 * Program: arrays
 * Description: Create a program that reads 6 quiz scores from user input, and store them in a float array. Then, calculate the sum and average of the quiz scores.
*/

#include <iostream>

using namespace std;

int main()
{
    float scores[6] = { 0 };
    float sum = 0, average = 0;

    cout << "Arrays!\n";
    cout << "----------\n";
    cout << "Enter 6 quiz scores: ";
    for (int i = 0; i < 6; i++)
        cin >> scores[i];
    for (int i = 0; i < 6; i++)
        sum += scores[i];
    average = sum / 6;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}

