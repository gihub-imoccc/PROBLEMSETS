#include<bits/stdc++.h>
using namespace std;
set<char> s1, res;
string t1, t2;

void solve() {
    cin>>t1>>t2;
    for(char c:t1) {
        s1.insert(c);
    }
    for(char c:t2) {
        for(char s:s1) {
            if(c==s) {
                res.insert(c);
                break;
            }
        }
    }
    for(char c:res) cout<<c<<' ';
}

int main() {
    solve();

    return 0;
}