#include <iostream>
using namespace std;

int main() {

    int n, min, max;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    min = max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    cout << "Array elements are: [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    cout << "The min element is " << min << endl;
    cout << "The max element is " << max << endl;

    return 0;
}
