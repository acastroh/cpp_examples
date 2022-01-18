/*
 * Author: Alberto Cahdez
 * Created: Jan 17, 2022
 * Updated: Jan 17, 2022
 * Program:  struct-functions-II
 * Description: Create a function that reads the first name, last name, and age of a person from the user input; then store them in a struct.
 * Also, the function returns a copy of that struct.
 * Create a program which, in the main function, gets the copy of the function's struct and display that information.
*/

#include <iostream>
#include <string>

using namespace std;

struct person {
    string firstname;
    string lastname;
    int age;
};

person getPersonData();

int main()
{
    person p;
    cout << "struct and functions!\n";
    cout << "----------------------\n";

    p = getPersonData();
    cout << "\nPerson's information:\n";
    cout << p.firstname << " " << p.lastname << ", " << p.age << endl;

}

person getPersonData() {
    person local_p;
    cout << "Enter the following data.\n";
    cout << "First name: ";
    cin >> local_p.firstname;
    cout << "Last name: ";
    cin >> local_p.lastname;
    cout << "Age: ";
    cin >> local_p.age;
    return local_p;
}
