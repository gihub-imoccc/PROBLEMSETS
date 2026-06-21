#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b; cin >> a >> b;
    int b2 = b;
    int cnt = 0;
    if(a < b) {
        cout << b - a;
    }
    else if(a == b) cout << 0;
    else {
        while(a % b != 0) {
            a++;
        }
        cout << abs(a - b);
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}