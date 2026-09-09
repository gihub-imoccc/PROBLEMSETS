#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    int n; cin >> n;
    while(n--) {
        ll M = 1;
        ll y, x; cin >> y >> x;

        if(x == y) {
            M = x * (x - 1) + 1;
        }
        else if(y > x) {
            M = y * (y - 1) + 1;
            if(y % 2 == 0) M += abs(x - y);
            else M -= abs(x - y);
        }
        else {
            M = x * (x - 1) + 1;
            if(x % 2 != 0) M += abs(x - y);
            else M -= abs(x - y);
        }
        cout << M << '\n';
    }


    return 0;
}