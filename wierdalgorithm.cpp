#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    long long n; cin >> n;

    bool p = false;

    cout  << n << ' ';

    if(n == 1) {
        p = true;
    }

    while(!p) {
        if(n % 2 == 0) {
            n /= 2;
        }
        else {
            n = n * 3 + 1;
        }

        cout << n << ' ';

        if(n == 1) p = true;
    }

    return 0;
}