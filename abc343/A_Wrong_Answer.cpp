#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(a + b - 1 >= 0) {
        cout << a + b - 1 << '\n';
    } else {
        cout << a + b + 1 << '\n';
    }
}