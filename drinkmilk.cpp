#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    priority_queue<long long, vector<long long>, greater<long long>> q;
    long long n, k, s = 0; cin >> n >> k;
    for(int i = 0; i < n; i++) {
        long long t; cin >> t;
        q.push(t);
    }
    for(int i = 0; i < k; i++) {
        s += q.top();
        long long t = q.top() + (q.top() / 20);
        q.pop();
        q.push(t);
    }
    cout << s;

    return 0;
}