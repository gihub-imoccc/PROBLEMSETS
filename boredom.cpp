#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+5;

ll arr[N], dp[N];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    ll n; cin >> n;
    for(int i = 0; i < n; i++) {
        ll a; cin >> a;
        arr[a]++;
    }

    dp[1] = arr[1];
    for(int i = 2; i < N; i++) {
        dp[i] = max(dp[i-1], dp[i-2]+arr[i]*i);
    }
    cout << dp[N-1];


    return 0;
}