#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s; cin >> s;
    string ans = "";
    vector<int> v(27, 0);
    vector<char> alph;
    char mid;
    string A = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(auto e : A) alph.push_back(e);
    int cnt = 0;
    for(int i = 0; i < s.length(); i++) {
        v[(int)s[i] - 64]++;
    }
    for(auto e : v) if(e % 2 != 0) cnt++;
    if(cnt > 1) cout << "NO SOLUTION";
    else {
        for(int i = 1; i <= 26; i++) {
            if(v[i] % 2 != 0) {
                mid = A[i - 1];
                if(v[i] == 1) continue;
            }

            for(int j = 0; j < v[i]/2; j++) {
               ans += alph[i - 1];
            }
        }                                                               

        
        cout << ans;
        if(mid != NULL) cout << mid;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }

    return 0;
}