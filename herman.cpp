#include<bits/stdc++.h>
const double pi = 2 * acos(0.0);

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    double a = pi*n*n, b = 2*n*n;

    cout << fixed << setprecision(6) << a << '\n' << b;

 

    return 0;
}