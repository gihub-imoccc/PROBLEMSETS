#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b, x;
string A;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> a >> b >> x;
    a *= b;
    A = to_string(a);
    if(x <= A.length()) {
        cout << A[x-1];
    }
    else cout << '_';
    
    
    
    return 0;
}