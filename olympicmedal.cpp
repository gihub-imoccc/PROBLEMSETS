#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> v1(n), v2(n), v3(n);
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<int>());
    
    for(int i = 0; i < n; i++) {
        v3[i] = (v1[i] + v2[i]);
    }
    sort(v3.begin(), v3.end());
    int c = 0;
    for(int i = 0; i < n - 1; i++) {
        c += v3[i + 1] - v3[i];
    }
    cout << c;


    return 0;
}