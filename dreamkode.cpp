#include<bits/stdc++.h>
using namespace std;
map<char, int> m;

int main() {
    string t; cin >> t;
    int mx = -1;
    for(auto i : t) {
        if(i != ' ') {
            m[i]++;
        }
    }
    for(auto k : m) {
        if(k.second > mx) mx = k.second;
    }
    cout << mx;

    return 0;
}