#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    string t; cin >> t;
    int n1 = 0, n2 = 0, k = 0;

    for(int i = t.length()-1; i > -1 ; i--) {
        if(i % 2 == 1) {
            n1 += t[i] - '0';
            
        }
        else {
            if(i != t.length() - 1) {
                n2 += t[i] - '0';
        
            }
            else k = t[i] - '0';
        }
    }
    bool c;
    c =  ((n1 * 3 + n2 + k) % 10 == 0) ? true : false;

    if(c) cout << "YES";
    else cout << "NO";
    
    return 0;
}