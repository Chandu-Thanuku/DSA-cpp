#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Taking input
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Arithmetic operations
    cout << "\n--- Arithmetic Operations ---" << endl;
    cout << "Addition (+): " << (a + b) << endl;
    cout << "Subtraction (-): " << (a - b) << endl;
    cout << "Multiplication (*): " << (a * b) << endl;
    cout << "Division (/): " << (a / b) << endl; // integer division
    cout << "Modulus (%): " << (a % b) << endl;

    // Division with decimal result
    cout << "Division with decimal: " << (static_cast<double>(a) / b) << endl;

    // Increment and decrement
    cout << "\n--- Increment & Decrement ---" << endl;
    int x = a;
    cout << "Original value: " << x << endl;
    cout << "Post-increment (x++): " << x++ << endl;
    cout << "After post-increment: " << x << endl;
    cou
