#include<bits/stdc++.h>
using namespace std;
const int c = 3e4 + 5;

bool p[c];

void f(int k) {
    int ans = 0;
    for(int i = 2; i <= k; i++) {
        if(!p[i] && !p[k-i]) ans++;
    }
    cout << ans/2 << '\n';
    ans = 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    for(int i = 2; i < c; i++) {
        if(p[i] == false) {
            for(int j = i*2; j < c; j += i) {
                p[j] = true;
            }
        }
    }
    int  t; cin >> t;
    
    while(t--) {
        int k; cin >> k;
        f(k);
    }

    return 0;
}