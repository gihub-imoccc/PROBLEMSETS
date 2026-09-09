#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;
    
    if(n == 1) cout << 1;
    else if(n <= 3) cout << "NO SOLUTION";
    else {
        int c = 2;

        if(n % 2 != 0) {
            while(c < n + 1) {
                cout << c << ' ';
                c += 2;
            }
            c = 1;
            while(c <= n) {
                cout << c << ' ';
                c += 2;
            }
        }
        else {
            while(c <= n) {
                cout << c << ' ';
                c += 2;
            }
            c = 1;
            while(c < n + 1) {
                cout << c << ' ';
                c += 2;
            }
        }
    }

    return 0;
}