#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a;
    int q;
    cin >> q;

    while (q--) {
        int op, x;
        cin >> op >> x;
        if(op == 1) {
            a.push_back(x);
        } else {
            cout << a[a.size() - x] << "\n";
        }
    }
    
}