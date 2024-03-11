#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    vector<int> a;
    while (cin >> x) {
        a.push_back(x);
    }
    for (int i = a.size() - 1; i >= 0; i--)
        cout << a[i] << '\n';
}