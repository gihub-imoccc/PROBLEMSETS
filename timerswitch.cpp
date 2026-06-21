#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q0, q1;
    int n, k = 0; cin >> n;
    string s; cin >> s;
    for(int i = 0; i < n; i++) {
        q0.push(s[i]);
        q1.push(s[i]);
    }

    while(true) {
        if(k != 0 && n % k == 0 && q1 == q0) break;
        int l = q1.front();
        q1.pop();
        q1.push(l);
        k++;
    }
    cout << k;

    return 0;
}