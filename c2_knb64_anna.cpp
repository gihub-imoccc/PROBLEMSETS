#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> v(5);
vector<pair<ll, ll>> ans;
ll a = 0, b = 0;

bool mod(ll a, ll b, ll result) {
    if(b == 0) return false;

    if(result == a % b) return true;
    return false; 
}

bool divide(ll a, ll b, ll result) {
    if(b == 0) return false;

    if(result == a / b) return true;
    return false;
}

bool multi(ll a, ll b, ll result) {
    if(result == a * b) return true;
    return false;
}

void solve() {
    for(int i = 0; i < 5; i++) cin >> v[i];

    sort(v.begin(), v.end());
    do{
        if(((v[0]+v[1])) % 2 != 0) {
            continue;
        }
        a = (v[0] + v[1])/2;
        b = v[0] - a;

        if(multi(a, b, v[2]) && divide(a, b, v[3]) && mod(a, b, v[4]) == true) {
            
            ans.push_back({a, b});
        }
        

    }while(next_permutation(v.begin(), v.end()));

    if(ans.size() == 1) {
        cout << ans[0].first << ' ' << ans[0].second << '\n';
    }
    else cout << "0 0" << '\n';
    
    ans.clear();
    return;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while(t--) solve();

    

    return 0;
}