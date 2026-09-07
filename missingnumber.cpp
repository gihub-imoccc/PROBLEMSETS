#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, sz; cin >> n;
    sz = n;

    vector<bool> v(n + 7, false);
    
    n--;
    while(n--) {
        int i; cin >> i;
        v[i] = true;
    }

    for(int i = 1; i <= sz; i++) {
        if(!v[i]) {
            cout << i;
            break;
        }
    }

    return 0;
}