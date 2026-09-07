#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    vector<ll> v(n);
    
    ll cnt = 0, mx = 0;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
        if(v[i] > mx) mx = v[i];

        if(i > 0) {
            if(v[i] < mx) {
                
                cnt += mx - v[i];
            }
        }
    }
    cout << cnt;


    return 0;
}