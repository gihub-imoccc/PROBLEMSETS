#include<bits/stdc++.h>
using namespace std;

int arr[1000006];
int dp[1000006];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;
    int mx = -9999999;

    for(int i = 1; i < n + 1; i++) {
        cin >> arr[i];
        dp[i] = dp[i - 1] + arr[i];
    }
    for(int i = 0; i < n - k + 1; i++) {
        int t = dp[i + k] - dp[i];
        
        if(t > mx) mx = t;
    }
    cout << mx;



    return 0;
}