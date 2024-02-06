#include <iostream>
using namespace std;

bool isNumeric(const string& input) {
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
         }
    }
    return true;
}

int main() {
    string a;

    cout << "Enter a value: ";
    cin >> a;

    if (isNumeric(a)) {
        cout << a << " is a NUMERIC constant" << endl;
    } else {
        cout << a << " is NOT A NUMERIC constant" << endl;
    }

    return 0;
}
