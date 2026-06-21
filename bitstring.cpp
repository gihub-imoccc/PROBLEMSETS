#include<bits/stdc++.h>
using namespace std;

int sz, cnt=0;
string t;

void rec(int n, string s) {
    if(n == sz) {
        // cout << s << '\n';
        if(s.find(t) != -1) cnt++;
        return;
    }

    rec(n+1, s+'0');
    rec(n+1, s+'1');


}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    
    cin >> sz >> t;


    rec(0, "");
    cout << cnt;


    return 0;
}