#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, cnt=0; cin>>n>>m;
    for(int i=n;i<m;i++) {
        if(i%2==0||i%3==0) cnt+=i;
    }
    cout<<cnt;
}

int main() {
    solve();


    return 0;
}