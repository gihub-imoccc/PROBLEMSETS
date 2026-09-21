#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<int> num(n); for(auto & e : num) cin >> e;
    
    vector<int> dp(n + 1);
    int ans = 0;
    dp[0] = 0;
    dp[1] = dp[0] + abs(num[1]-num[0]);
    

    for(int i = 2; i <= n; i++) {
        dp[i] = min(dp[i-1]+abs(num[i]-num[i-1]), dp[i-2]+abs(num[i]-num[i-2]));
    }
    cout << dp[n - 1];
    


    return 0;
}