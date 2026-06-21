#include<bits/stdc++.h>
using namespace std;
#define condition 

int l, k, cnt=0, cnt0=0;

string p="";

void rec(int n) {
    if(n == l) {
        // cout << p << '\n';
        if(cnt0 <= k) {
            cnt++;
        }
        
        return;
    }

    if(p.back() != '0') {
        p += '0';
        cnt0++;
        rec(n + 1);
        p.pop_back();
        cnt0--;
    }
    

    p += '1';
    rec(n + 1);
    p.pop_back();


}

int main() {
    cin.tie(0)->sync_with_stdio(0);


    cin >> l >> k;
    

    rec(0);

    cout << cnt;




    return 0;
}