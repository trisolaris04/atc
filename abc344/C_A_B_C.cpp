#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n); 
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    vector<int> b(m); 
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l;
    cin >> l;
    map<int, bool> mp;
    vector<int> c(l); 
    for (int i = 0; i < l; i++)
        cin >> c[i];    

    for (auto i : a)
        for (auto j : b)
            for (auto k : c)
                mp[i + j + k] = true;
    int q;
    cin >> q;
    
    for ( ; q--; ) {
        int x;
        cin >> x;
        if (mp[x])
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
}