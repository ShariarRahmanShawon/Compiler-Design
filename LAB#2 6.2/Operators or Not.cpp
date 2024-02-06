#include <iostream>
#include <string>

using namespace std;

bool isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%' || ch == '=');
}

int main() {
    cout << "Enter a string: ";
    string st;
    getline(cin, st);

    cout << "\nOperators in the input:\n\n";

    for (char ch : st) {
        if (isOperator(ch)) {
            cout << "Operator: " << ch << endl;
        }
    }

    return 0;
}
