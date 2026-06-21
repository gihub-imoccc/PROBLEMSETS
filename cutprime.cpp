#include<bits/stdc++.h>
using namespace std;
const int c = 1e6 + 2;

bool n[c];


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    n[0] = true;
    n[1] = true;
    for(int i = 2; i < 100; i++) {
        if(n[i] == false) {
            for(int j = i * 2; j < 100; j += i) {
                n[j] = true;
            }
        }
    }
    for(int i = 2; i < 100; i++) {
        if(n[i] == false) cout << i <<' ';
    }

    return 0;
}