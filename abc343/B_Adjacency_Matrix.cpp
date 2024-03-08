#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> edge[110];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            if(x)
                edge[i].push_back(j), edge[j].push_back(i);
        }

    for(int i = 1; i <= n; i++) {
        sort(edge[i].begin(), edge[i].end());
        edge[i].erase(unique(edge[i].begin(), edge[i].end()), edge[i].end());
        for(auto j : edge[i])
            cout << j << " ";
        cout << '\n';
    }   
}