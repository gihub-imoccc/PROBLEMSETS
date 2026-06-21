#include<bits/stdc++.h>
using namespace std;

void solve() {
    string n; cin>>n;
    int cnt=0;
    for(char c:n) {
        cnt+=c-'0';
    }
    cout<<cnt;
}

int main() {
    solve();

    return 0;
}