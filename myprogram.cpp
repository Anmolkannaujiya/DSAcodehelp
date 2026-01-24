#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i]; // Taking input for the array
    }

    cout << "You entered: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " "; // Printing array elements
    }
    cout << "king kong";

    return 0;
}
