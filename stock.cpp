#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int c = 1e5 + 5;

int arr[c];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    ll ans = 0;
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
        if(i >= 1) {
            if(arr[i] - arr[i-1] > 0) ans += arr[i] - arr[i-1];
        }
    }
    cout << ans;
    return 0;
}