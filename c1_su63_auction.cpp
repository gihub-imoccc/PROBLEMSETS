#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    vector<int> v(n);
    for(auto &e : v) {
        cin >> e;
    }
    int cnt = v[0], mx = v[0];
    for(int i = 1 ; i < n; i++) {
        if(v[i] > mx) {
            cnt += v[i];
            mx = v[i];
        }
    }
    cout << cnt;
    
    return 0;
}