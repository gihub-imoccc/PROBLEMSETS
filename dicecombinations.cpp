#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
#define ll long long

ll dp[1000007];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n; cin >> n;

    dp[0] = 1;

    for(ll i = 1; i <= n; i++) {
        for(ll d = 1; d <= 6; d++) {
            if(i - d >= 0) dp[i] = (dp[i] + dp[i - d]) % MOD; 
        }
    }
    cout << dp[n];


    
    return 0;
}