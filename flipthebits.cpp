#include<bits/stdc++.h>
using namespace std;

void solve() {
    int s; cin >> s;
    int tr; cin >> tr;
    int cnt = 0;
    vector<int> v(s);

    for(int &i : v) {
        cin >> i;
    }
    int spi; cin >> spi;
    if(v[spi - 1] == 1) {
        for(int i = 0; i < s; i++) {
            if(v[i] == 0) {
                cnt++;
                while(v[i] == 0) i++;
            }
        }
        
    }
    else {
        for(int i = 0; i < s; i++) {
            if(v[i] == 1) {
                cnt++;
                while(v[i] == 1) i++;
            }
        }
    }
    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();

    return 0;
}