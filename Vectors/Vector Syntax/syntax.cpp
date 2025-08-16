#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Adding elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Remove last element
    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v) { // range-based for loop
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
