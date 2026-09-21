#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n,sum; cin >> n >> sum;
    vector<ll> coin(n); for(auto & e : coin) cin >> e;

    vector<ll> dp(sum + 1, 0);

    dp[0] = 1;
    for(ll c = 0; c < coin.size(); c++) {
        for(ll i = 1; i <= sum; i++) {
            if(i - coin[c] >= 0) {
                dp[i] += dp[i - coin[c]];
                dp[i] %= MOD;
            }
        }
    }
    cout << dp[sum];



    return 0;
}