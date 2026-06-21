#include<bits/stdc++.h>
using namespace std;
const int n = sqrt(2e9+1);

bool p[n];
vector<int> prime;

int main() {
    int t; cin >> t;
    p[0] = true;
    p[1] = true;
    for(int i = 2; i < n; i++) {
        if(!p[i]) {
            prime.push_back(i);
            for(int j = i*2; j < n; j += i) {
                p[j] = true;
            }
        }
    }
    while(t--) {
        int q, cnt = 0; cin >> q;
        for(auto i : prime) {
            if(i*i > q) break;
            while(q % i == 0) {
                cnt++;
                q /= i;
            }
        }
        if(cnt <= 1 && q != 1) cnt++;
        cout << cnt << '\n';
    }
    // for(auto a : prime) cout << a << ' ';

    return 0;
}