#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, cnt=0, b; cin>>n>>b;
    vector<int> v(n);

    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    string e; cin>>e;
    int i=0;
    int l=n-1;
    for(char c:e) {
        if(c=='L') {
            cnt+=v[i];
            i++;
        }
        else {
            cnt+=v[l];
            l--;
        }
    }
    cout<<cnt;
}

int main() {
    solve();

    return 0;
}