#include <iostream>
using namespace std;

int main()
{
    string input_str;
    cout << "Enter a string: ";
    cin >> input_str;

    bool valid = true;

    if (input_str.empty())

       {
        valid = false;
    } else
    {
        for (char c : input_str)
            {
            if (!((c >= 'a' && c <= 'z') ||
                  (c >= 'A' && c <= 'Z') ||
                  (c >= '0' && c <= '9') ||
                  c == '_'))
    {
        valid = false;

                break;
            }
        }
        if
            (input_str[0] >= '0' && input_str[0] <= '9')
            {
            valid = false;
}
    }

    if (valid)
        {
        cout << input_str << " is a valid identifier." << endl;
    }
    else
     {
        cout << input_str << " is an invalid identifier." << endl;
    }

    return 0;
}
