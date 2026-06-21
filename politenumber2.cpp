#include<bits/stdc++.h>
using namespace std;
const int M = 5e5+5;

bool arr[M];


void f(int q) {
    int ans = 0;
    for(int i = 3; i < q/2+1; i++) {
        if(arr[i] == false) {
            if(i < q) {
                if(arr[q-i] == false) ans++;    
            }
            
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    for(int i = 2; i < M; i*=2) {
        arr[i] = true;
    }
    int t; cin >> t;
    while(t--) {
        int q; cin >> q;
        f(q);
    }

    return 0;
}
    
