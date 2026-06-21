#include<bits/stdc++.h>
using namespace std;

int o, z, l;
string t = "";
int have = 0;
vector<string> v;

void rec(int n, int cnt0, int cnt1, bool n2) {
    if(n == o+z+1) {
        // cout << t << '\n';
        v.push_back(t);
        have++;
        return;
    }

    if(cnt0 < o) {
        t += '0';
        rec(n+1, cnt0+1, cnt1, n2);
        t.pop_back();
    }
    
    if(cnt1 < z && n2 == false) {
        t += '1';
        rec(n+1, cnt0, cnt1+1, n2);
        t.pop_back();
    }
    
    if(n2 == false) {
        t += '2';
        rec(n+1, cnt0, cnt1, true);
        t.pop_back();
        n2 = false;
    }



}



int main() {

    cin.tie(0)->sync_with_stdio(0);
    v.push_back("0");
    cin >> o >> z >> l;

    rec(0, 0, 0, false);
    // cout << v[l];

    if(have < l) {
        cout << "NONE";
        return 0;
    }

    string c = v[l];

    int ans = 0;
    for(int i = 0; i < c.length(); i++) {
        
        ans += (c[i]-'0')*(pow(2, c.length()-i)-1);
        
    }
    cout << ans;

    return 0;
}