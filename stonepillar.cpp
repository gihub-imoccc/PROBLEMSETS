#include<bits/stdc++.h>
using namespace std;

vector<string> v;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    int id = 0, cnt = 0;
    while(t--) {
        string ss; cin >> ss;

        id++;
        v.push_back(ss);
    }
    
    sort(v.begin(), v.end());

    for(int i = 0; i < id; i++) {
        if(v[i + 1] != v[i]) {
            cnt++;
        }
    }

    cout << cnt << '\n';

    for(int i = 0; i < id - 1; i++) {

        string sb = v[i].substr(0, 3);
        string sb2 = v[i + 1].substr(0, 3);

        if(i == 0) cout << v[0] <<' ';
        else {
            if(sb != sb2) {
                cout << v[i + 1] << ' ';
            }
        }
    }
    

    
    return 0;
}