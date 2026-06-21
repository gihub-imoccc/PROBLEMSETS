#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 1;

bool p[N];
vector<int> prime;
vector<int> pol;
bool pl[N];

void f() {
    int n; cin >> n;
    int ans = 0;
    for(int i = 3; i < n; i++) {
        while(!pl[i]) i++;
        if(pl[n-i]) {
            ans++;
            if(i == n-i) ans++;
        }
    }
    ans /= 2;
    cout << ans <<'\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    p[0] = true;
    p[1] = true;
    for(int i = 2; i < N; i++) {
        if(p[i]) continue;
        prime.push_back(i);
        for(int j = i*2; j < N; j += i) {
            p[j] = true;
        }
    }
    for(int i = 1; i < N; i++) {
        for(auto e : prime) {
            if(e == 2) continue;
            if(i%e == 0) {
                pl[i] = true;
                break;
            }
        }
    }
    while(t--) {
        f();
    }
    return 0;
}