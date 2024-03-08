#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<ll> a(n, 0);
    map<ll, int> mp; 

    int ans = 1;
	  mp[0] = n;
    for(int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        --x;
        mp[a[x]]--;
        if(!mp[a[x]])
            ans--;
        a[x] += y;
        mp[a[x]]++;
        if(mp[a[x]] == 1)
            ans++;
        cout << ans << '\n';
    }
}