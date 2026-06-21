#include<bits/stdc++.h>
using namespace std;
map<float, int> m;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    string txt;
    int s, t; cin >> s >> t;

    for(int i = -1; i < s - 1; i++) {
        m[i] = 0;
    }
    
    while(t--) {
        cin >> txt;
        if(txt == "pa") {
            for(auto i : m) {
                cout << i.second << ' ';
            }
            cout << '\n';
        }
        else if(txt == "i") {
            double id, v; cin >> id >> v;
            if(id > s - 2 || id < -1) cout << "error\n";
            else {
                m[id] = v;
            }
            
        }
        else if(txt =="pi") {
            double id; cin >> id;
            // cout << "id=" << id<<' ';
            if(id > s - 2 || id < -1) cout << "error\n";
            else {
                if(m.find(id) == m.end()) cout << 0 << '\n'; 
                else cout << m[id] << '\n';
            }
        }
    }

    return 0;
}