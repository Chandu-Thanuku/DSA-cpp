#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print each element using a loop
    cout << "Array elements are: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Modify an element
    numbers[2] = 35;  // Change 3rd element (index 2)

    cout << "After modification, array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
