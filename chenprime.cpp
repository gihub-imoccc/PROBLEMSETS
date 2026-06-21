#include<bits/stdc++.h>
using namespace std;
const int N = 2e7+7;

bool p[N];
vector<int> pr;
bool ch[N];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int l, u; cin >> l >> u;

    p[0] = true;
    p[1] = true;
    for(int i = 2; i < N; i++) {
        if(p[i] == true) continue;
        pr.push_back(i);
        for(int j = i*2; j < N; j+=i) {
            p[j] = true;
        }
    }

    for(int i = 0; i < pr.size(); i++) {
        for(int j = i; j < pr.size(); j++ ) {
            if(pr[i]*pr[j] < N) {
                ch[pr[i]*pr[j]] = true;
                // cout << pr[i]*pr[j] << ' ';
            }
            else break;
        }
    }
    int ans = 0;
    for(int i = l; i <= u; i++) {
        if(p[i] == false) {
            if(ch[i+2] == true) {
                ans++;
                // cout << i << ' ';
            }
            else if(p[i+2] == false) {
                ans++;
                // cout << i << ' ';
            }
        } 
    }
    cout << ans;


    return 0;
}