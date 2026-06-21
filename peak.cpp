#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> arr(5e6 + 5);
vector<ll> v;
set<ll> s;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, k; cin >> n >> k;
    
    for(int i = 1; i < n + 1; i++) {
        cin >> arr[i];
    }
    
    for(int i = 1; i < n + 1; i++) {
        
        if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            // cout << arr[i] << ' ';
            s.insert(arr[i]);
        }
    }
    for(ll c : s) {
        v.push_back(c);
    }
    if(v.size() == 0) {
        cout << -1;
        return 0;
    }
    else if(!(v.size() < k)) sort(v.begin(), v.end(), greater<ll>());
    for(auto &n : v) {
        if(k > 0) {
            cout << n << '\n';
            k--;
        }
        else return 0;
    }

    return 0;
}