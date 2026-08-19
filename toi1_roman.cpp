#include<bits/stdc++.h>
using namespace std;

vector<int> v(5, 0);

void think(int n) {
    while(n > 0) {
        if(n >= 100) {
            v[4]++;
            n -= 100;
        }
        else if(n >= 90) {
            v[4]++;
            v[2]++;
            n -= 90;
        }
        else if(n >= 50) {
            v[3]++;
            n -= 50;
        }
        else if(n >= 40) {
            v[2]++;
            v[3]++;
            n -= 40;
        }
        else if(n >= 10) {
            v[2]++;
            n -= 10;
        }
        else if(n >= 9) {
            v[0]++;
            v[2]++;
            n -= 9;
        }
        else if(n >= 5) {
            v[1]++;
            n -= 5;
        }
        else if(n >= 4) {
            v[0]++;
            v[1]++;
            n -= 4;
        }
        else if(n > 0) {
            v[0]++;
            n --;
        }
    }
    
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int n; cin >> n;
    string t = "";

    for(int i = 1; i <= n; i++) think(i);

    for(auto e : v) cout << e << ' ';

    return 0;
}