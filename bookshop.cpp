#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n, price; cin >> n >> price;
    vector<int> pricebook(n); for(auto & e : pricebook) cin >> e;
    vector<int> pagebook(n); for(auto & e : pagebook) cin >> e;
    vector<int> dp(price + 1, 0);
    int ans = 0;

    dp[0]=0;
    

    for(int i = 0; i < n; i++) {
        for(int j = price; j > 0; j-- ) {
            if(j - pricebook[i] >= 0) {
                dp[j] = max(dp[j], dp[j-pricebook[i]]+pagebook[i]);
            }
        }
    }

    
    cout << dp[price];

    return 0;
}

/*
4 10
4 8 5 3
5 12 8 1

*/