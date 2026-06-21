#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

void f() {
    int t; cin >> t;
    ll m, d;

    for(int i = 0; i < t; i++) {
        if(i == 0) {
            cin >> d;
            continue;
        }
        else cin >> m;
        cout << m%d << '\n';
    }
    
}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        f();
    }
    return 0;
}