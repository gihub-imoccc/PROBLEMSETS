#include<bits/stdc++.h>
using namespace std;

int arr[1005][1005];
int dp[1005][1005];
int mx = 0;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int x, y; cin >> y >> x;
    int s; cin >> s;
    
    for(int i = 1; i < y + 1; i++) {
        for(int j = 1; j < x + 1; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i < y + 1; i++) {
        for(int j = 1; j < x + 1; j++) {
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + arr[i][j];
            // cout << dp[i][j] << ' ';
        }
        // cout << '\n';
    }
    for(int i = s; i < y + 1; i++) {
        for(int j = s; j < x + 1; j++) {
            if(mx < dp[i][j] - dp[i-s][j] -dp[i][j-s] + dp[i-s][j-s]) mx = dp[i][j] - dp[i-s][j] -dp[i][j-s] + dp[i-s][j-s];
        }
    }
    cout << mx;

    return 0;
}