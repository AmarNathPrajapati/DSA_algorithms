#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;

    string s;

    // Add the initial character
    if (b > a) {
        s += "1";
        b--;
    } else {
        s += "0";
        a--;
    }

    // Fill the string alternating between the majority character and the minority character
    while (x > 0) {
        if (s.back() == '0') {
            s += "1";
            b--;
        } else {
            s += "0";
            a--;
        }
        x--;
    }

    // Add the remaining characters
    while (a > 0) {
        s = "0" + s;
        a--;
    }

    while (b > 0) {
        s += "1";
        b--;
    }
    reverse(s.begin(),s.end());
    cout << s << endl;

    return 0;
}
