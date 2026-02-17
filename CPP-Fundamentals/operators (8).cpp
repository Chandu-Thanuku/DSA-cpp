#include<bits/stdc++.h> // includes all templates
using namespace std;

int main() {
    // 1. Simple initialization
    pair<int, string> p1 = {1, "Apple"};

    // 2. Using make_pair()
    pair<int, string> p2 = make_pair(2, "Banana");

    // 3. Default constructor, then assign
    pair<int, string> p3;
    p3.first = 3;
    p3.second = "Cherry";

    // Print values
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
    cout << p3.first << " " << p3.second << endl;
    pair<int,char>a[]={{1,'a'},{2,'b'},{3,'c'}};
    cout<<a[1].second;

    return 0;
}
