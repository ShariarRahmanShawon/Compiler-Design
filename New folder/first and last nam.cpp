#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName, fullName;

    cout << "Enter your FIRST name: ";
cin>>firstName;

    cout << "Enter your LAST name: ";
    cin>>lastName;

    fullName = firstName + " " + lastName;


    cout << "FULL name: " << fullName <<endl;

    return 0;
}
