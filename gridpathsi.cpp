#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
const int MOD = 1e9 + 7;
int n; 
int dp[N][N];

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    char arr[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(arr[i][0] == '.') dp[i][0] = 1;
        else break;
    }
    for(int i = 0; i < n; i++) {
        if(arr[0][i] == '.') dp[0][i] = 1;
        else break;
    }

    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            if(arr[i][j] != '*') {
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
            else dp[i][j] = 0;
            dp[i][j] %= MOD;
        }
        
    }
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) {
    //         cout << dp[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    cout << dp[n-1][n-1];

    
    return 0;
}