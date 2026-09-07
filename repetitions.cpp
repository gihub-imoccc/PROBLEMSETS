#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string s; cin >> s;
    int mx = 1,cnt = 1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == s[i+1]) {
            cnt++;
        }
        else {
            if(cnt > mx) mx = cnt;
            cnt = 1;
        }
        

    }
    cout << mx;

    return 0;
}