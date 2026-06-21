#include<bits/stdc++.h>
using namespace std;

void solve() {
    string t; cin>>t;
    set<char> c;
    for(char k:t) {
        c.insert(k);
    }
    for(auto chr:c) cout<<chr<<' ';
}

int main() {
    solve();
    return 0;
}