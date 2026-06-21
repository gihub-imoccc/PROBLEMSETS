#include<bits/stdc++.h>
using namespace std;

int dp[1000005];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, sum = 0; cin >> n;
    for(int i = 1; i < n + 1; i++) {
        int t; cin >> t;
        
        dp[i] = dp[i - 1] + t;

        // cout << dp[i] << ' ';
    }
    int ts; cin >> ts;
    
    while(ts--) {
        int s, e; cin >> s >> e;
        cout << dp[e + 1] - dp[s] << '\n'; 
    }

    return 0;
}