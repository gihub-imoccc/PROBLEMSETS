#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<ll> dp(n + 1, LLONG_MAX);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        string t = to_string(i);
        for(char c : t) {
            if(c-'0' > 0) dp[i] = min(dp[i], dp[i - (c - '0')] + 1);
        }
    }
    cout << dp[n];

    return 0;
}