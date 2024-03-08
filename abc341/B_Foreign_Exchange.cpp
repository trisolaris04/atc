#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[200010], s[200010], t[200010];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++) {
        cin >> s[i] >> t[i];
        if(a[i] >= s[i])
            a[i + 1] += t[i];
    }

    cout << a[n] << '\n';
}