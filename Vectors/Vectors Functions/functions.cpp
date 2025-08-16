#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    // Add elements
    v.push_back(10);   // {10}
    v.push_back(20);   // {10, 20}
    v.push_back(30);   // {10, 20, 30}

    // Access elements
    cout << v[0];      // 10
    cout << v.at(1);   // 20
    cout << v.front(); // 10 (first element)
    cout << v.back();  // 30 (last element)

    // Size
    cout << v.size();  // 3

    // Remove last element
    v.pop_back();      // {10, 20}

    // Loop through vector
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }

    // Clear all elements
    v.clear();         // {}
}
