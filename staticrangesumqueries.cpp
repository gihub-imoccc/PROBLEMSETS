#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, q; cin >> n >> q;
    ll dp[200007];
    ll a; 
    for(int i = 1; i <= n; i++) {
        cin >> a;
        if(i == 1) dp[i] = a;
        else {
            dp[i] = dp[i - 1] + a;
        }
    }
    int u, v;
    while(q--) {
        cin >> u >> v;
        cout << dp[v] - dp[u - 1] << '\n';
    }

    return 0;
}