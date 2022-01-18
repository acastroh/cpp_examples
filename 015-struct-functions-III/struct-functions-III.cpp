/*
 * Author: Alberto Cahdez
 * Created: Jan 17, 2022
 * Updated: Jan 17, 2022
 * Program: struct-functions-III.cpp
 * Description: Create a function that receives a struct by reference, then reads the first name, last name, and age of a person from user input, and store them in the referenced struct.
 * Create a program which, in the main, calls the above function and displays the person's information.
*/

#include <iostream>
#include <string>

using namespace std;

struct person {
    string firstname;
    string lastname;
    int age;
};

void getPersonData(person& local_p);

int main()
{
    person p;
    cout << "struct and functions!\n";
    cout << "----------------------\n";

    getPersonData(p);
    cout << "\nPerson's information:\n";
    cout << p.firstname << " " << p.lastname << ", " << p.age << endl;

}

void getPersonData(person& local_p) {
    cout << "Enter the following data.\n";
    cout << "First name: ";
    cin >> local_p.firstname;
    cout << "Last name: ";
    cin >> local_p.lastname;
    cout << "Age: ";
    cin >> local_p.age;
}