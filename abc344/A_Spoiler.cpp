#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (auto c : s) {
        if (c == '|')
            break;
        cout << c;
    }
    reverse(s.begin(), s.end());
    string p;
    for (auto c : s) {
        if (c == '|')
            break;
        p += c;
    }

    reverse(p.begin(), p.end());
    cout << p << '\n';
}