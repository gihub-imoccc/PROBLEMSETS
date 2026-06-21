#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<pair<int, int>> v;

    while(n--) {
        pair<int, int> t; cin >> t.first >> t.second;
        v.push_back({t.second, t.first});
    }
    sort(v.begin(), v.end());
    cout << v[1].second << ' ' << v[1].first;

    return 0;
}