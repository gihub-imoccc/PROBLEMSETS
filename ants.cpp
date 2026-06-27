#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    ll n; cin >> n;
    vector<ll> v(n + 1), p(n + 1);
    ll cnt = 0;

    
    p[0] = 0;

    for(int i = 1; i <= n; i++) {
        cin >> v[i];
        
        if(v[i] == 1 && i > 0) {
            p[i] = p[i-1] + 1;
            
        }
        else if(v[i] == 0 && i > 0) {
            p[i] = p[i-1];
        }
        
        if(v[i] == 0) {
            cnt += p[i];
        }

        // cout << p[i] << ' ';
    }
    
    cout << cnt;

    

    

    return 0;
}