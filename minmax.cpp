#include<bits/stdc++.h>
using namespace std;

void solve() {
    int t, n; cin>>t;
    vector<int> v;
    while(t--) {
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout<<v[0]<<'\n'<<v[v.size()-1];
}

int main() {
    solve();

    return 0;
}