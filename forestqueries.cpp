#include<bits/stdc++.h>
using namespace std;

int arr[1005][1005];
int dp[1005][1005];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, q; cin >> n >> q;
    char c;
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            cin >> c;
            if(c == '.') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }
    
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];
            // cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }

    int x1, y1, x2, y2; 
    for(int i = 0; i < q; i++) {
        cin >> y1 >> x1 >> y2 >> x2;
        cout << dp[y2][x2] - dp[y1 - 1][x2] - dp[y2][x1 - 1] + dp[y1 - 1][x1 - 1] << '\n';
    }



    return 0;
}