#include<bits/stdc++.h>
using namespace std;
const int N = sqrt(2e6+1);  

vector<int> prime;
bool p[N];

void f() {
    int n, cnt = 0, ans = 1; cin >> n;
    for(auto e : prime) {
        if(e == 2) continue;
        while(n % e == 0) {
            cnt++;
            n /= e;
        }
        ans *= (cnt+1);
        cnt = 0;
        
    }
    cout << ans-1 << '\n';
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    p[0] = true;
    p[1] = true;
    for(int i = 2; i < N; i++) {
        if(p[i]) continue;
        prime.push_back(i);
        // cout << i << ' ';
        for(int j = i*2; j < N; j += i) {
            p[j] = true;
        }
    }
    while(t--) {
        f();
    }
    return 0;
}