#include<bits/stdc++.h>
using namespace std;
const int c = 1e7 + 5;

bool p[c];

void f(int d) {
    for(int i = d; i < c; i++) {
        if(!p[i] && !p[i+2]) {
            cout << i << ' ' << i+2 << '\n';
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    p[0] = true;
    p[1] = true;

    for(int i = 2; i < c; i++) {
        if(p[i] == false) {
            for(int j = i*2; j < c; j += i) {
                p[j] = true;
            }
        }
    }

    while(t--) {
        int d; cin >> d;
        f(d);
    }
    return 0;
}