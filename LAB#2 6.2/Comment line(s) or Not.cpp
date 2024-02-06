#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    if (input.find("//") == 0) {
        cout << "This is a single line comment" << endl;
    }

    else if (input.find("*/") == 0 || input.find("/*") == 0 ) {
        cout << "This is a multiple line comment" << endl;

    }


    return 0;
}
