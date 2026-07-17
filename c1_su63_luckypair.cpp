#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin  >> n;
    
    vector<int> v(n); for(auto &e : v) cin >> e;
    vector<pii> ans;
    
    int t; cin >> t;

    for(int i = 0; i < n - 1; i ++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i] + v[j] == t) ans.push_back({v[i], v[j]});
        }
    }

    if(ans.empty()) {
        cout << "No";
        return 0;
    }
    for(auto e : ans) cout << e.first << ' ' << e.second  << '\n';

    return 0;
}