#include<bits/stdc++.h>
using namespace std;
 
int arr[4005];
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
 
    int t, x, y, d; cin >> t;
    int mxc = -1, mxi;
    
    for(int i = 0; i < t; i++) {
        cin >> x >> y;
        d = 2*(abs(x) + y);
        arr[d]++;
        if(arr[d] > mxc) {
            mxc = arr[d];
            mxi = d;
        }
    }
    for(int i = 0; i < 4005; i++) {
        if(arr[i] == mxc) {
            cout << i << ' ' << mxc;
            return 0;
        }
    }
    
    
    return 0;
}