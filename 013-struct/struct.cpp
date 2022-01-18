/* 
 * Author: Alberto Cahdez
 * Created: Jan 17, 2022
 * Updated: Jan 17, 2022
 * Program: 013-struct.cpp
 * Description: Create a program that reads the first name, last name, and age of a person from user input, and store them in a struct. Then, display that information.
*/

#include <iostream>
#include <string>

using namespace std;

struct person {
    string firstname;
    string lastname;
    int age;
};

int main()
{
    person p;
    cout << "struct!\n";
    cout << "--------\n";
    cout << "Enter the following values.\n";
    cout << "First name: ";
    cin >> p.firstname;
    cout << "Last name: ";
    cin >> p.lastname;
    cout << "Age: ";
    cin >> p.age;
    cout << "\nPerson's information:\n";
    cout << p.firstname << " " << p.lastname << ", " << p.age << endl;
}
