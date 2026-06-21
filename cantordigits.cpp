#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int f[10];
    f[0] = 1;
    for(int i = 1; i <= 10; i++) {
        f[i] = f[i - 1] * i;
    }
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int id = 1;
        
        while(f[id] <= n) id++;
        id--;
        for(int i = id; i > 0; i--) {
            cout << n / f[i];
            n %= f[i];
        }
        cout << '\n';
    }
    


    return 0;
}