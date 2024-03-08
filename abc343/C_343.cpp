#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    ll ans = 0;
    for(int i = 1; i <= 1e6 + 10; i++) {
        ll x = 1LL * i * i * i;
        string s = to_string(x), p;
        p = s;
        reverse(p.begin(), p.end());
        if(p == s && x <= n)
            ans = max(ans, x);
    }

    cout << ans << '\n';
}