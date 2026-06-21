#include<bits/stdc++.h>
using namespace std;
long long f[101];

void solve() {
    f[0]=1;
    f[1]=1;
    for(int i=2;i<101;i++) {
        f[i]=f[i-1]+f[i-2];
    }
    int n; cin>>n;
    cout<<f[n-1];
}

int main() {
    solve();
    return 0;
}