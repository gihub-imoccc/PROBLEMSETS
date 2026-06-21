#include<bits/stdc++.h>
using namespace std;
map<int, int> m1;

int main() {
    int t1, t2, k, cnt = 0;
    cin >> t1;
    for(int i = 0; i < t1; i++) {
        cin >> k;
        m1[k]++;
    }
    cin >> t2;
    for(int i = 0; i < t2; i++) {
        cin >> k;
        m1[k]--;
    }
    for(auto i : m1) {
        cnt += abs(i.second);
    }
    
    cout << cnt;
    return 0;
}