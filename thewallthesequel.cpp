#include<bits/stdc++.h>
using namespace std;

long long arr[100005];
long long dp[100005];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n, q; cin >> n >> q;
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i + 1]; 
        
        dp[i + 1] = dp[i] + arr[i + 1];
    }
    while(q--) {
        long long l, m, r; cin >> l >> m >> r;
        if(m != 1) {
            while(l <= r) {
                sum += arr[l];
                l += m;
            }
            cout << sum << ' ';
            sum = 0;
        }
        else {
            cout << dp[r] - dp[l - 1] << ' ';
        }
    }


    return 0;
}