#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int n = 1e9;

bool arr[n];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll t, cnt = 0; cin >> t;
    ll sum = 0;
    priority_queue<pair<pair<ll, ll>, ll>> pq;

    for(int i = 0; i < t; i++) {
        ll h, a; cin >> h >> a;
        sum += a;
        arr[h] = true;
        pq.push({{h, a}, i + 1});
    }
    while(!pq.empty()) {
        ll p = pq.top().first.first;
        ll q = pq.top().first.second;
        ll r = pq.top().second;
        pq.pop();
        cnt += sum;
        if(arr[p / 2] == true || p / 2 < 10) {
            // arr[p] = false;
            sum -= q;
        }
        else {
            
            arr[p / 2] = true;
            pq.push({{p / 2, q}, r});
        }

        if(pq.empty()) {
            cout << cnt << ' ' << r;
            return 0;
        }
    }
    
    

    
    return 0;
}
