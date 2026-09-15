#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool solve() {
    ll a, b; cin >> a >> b;
    ll c;
    if(a < b) {
        c = b;
        b = a;
        a = c;
    }
    ll d = a - b;
    a -= 2 * d;
    b -= d;
    return (a % 3 == 0 && b % 3 == 0 && a >= 0 && b >= 0) ? true : false;

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while(t--) {
        if(solve()) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}