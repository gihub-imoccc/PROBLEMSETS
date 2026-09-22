#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, k; cin >> n >> k;
    vector<int> h(n); for(auto &e : h) cin >> e;
    vector<int> dp(n + 1,INT32_MAX);

    dp[0]=0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            if(i - j >= 0) {
                dp[i] = min(dp[i], dp[i-j] + abs(h[i]-h[i-j]));
            }
        }
    }
    cout << dp[n - 1];

    return 0;
}