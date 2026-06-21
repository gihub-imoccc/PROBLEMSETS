#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int p = 2e5+5;

ll arr1[p];
ll arr2[p];

ll dp1[p];
ll dp2[p];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n; cin >> n;
    for(int i = 1; i < n + 1; i++) cin >> arr1[i];
    for(int i = 1; i < n + 1; i++) cin >> arr2[i];

    for(int i = 1; i < n + 1; i++) {
        dp1[i] = dp1[i - 1] + arr1[i];
        dp2[i] = dp2[i - 1] + arr2[i];
    }

    for(int i = 1; i < n + 1; i++) {
        cout << arr2[i]*(dp1[i-1]) + arr1[i]*(dp2[i-1]) +arr1[i]*arr2[i]<< ' ';
    }


    return 0;
}