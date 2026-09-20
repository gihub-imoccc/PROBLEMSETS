#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n, sum; cin >> n >> sum;

    vector<ll> coin(n);
    for(auto  & e : coin) cin >> e;

    vector<ll> dp(sum + 1, LLONG_MAX);
    dp[0] = 0;

    for(ll i = 1; i <= sum; i++) {
        for(auto c : coin) {
            if(i - c >= 0 && dp[i - c] != LLONG_MAX) {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
    cout << ((dp[sum] == LLONG_MAX) ? -1 : dp[sum]);
    



    return 0;
}