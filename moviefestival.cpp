#include<bits/stdc++.h>
using namespace std;
const int M = 2e5+7;
#define pii pair<int, int>

priority_queue<pii, vector<pii>, greater<pii>> pq;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        pq.push({b, a});
    }

    int cnt = 0;

    while(!pq.empty()) {
        int p1 = pq.top().first;
        pq.pop();
        while(!pq.empty() && p1 > pq.top().second) {
            
            pq.pop();

        }
        cnt++;
    }

    cout << cnt;



    return 0;
}