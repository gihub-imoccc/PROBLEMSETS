#include<bits/stdc++.h>
using namespace std;

long long arr[58];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    arr[1] = 69;
    int t; cin >> t;
    for(int i = 2; i < 58; i++) {
        if(i % 2 == 0) {
            arr[i] = arr[i-1] + i;
        }
        else {
            arr[i] = arr[i-1] + arr[i-2] + i;
        }
    }
    while(t--) {
        int k; cin >> k;
        
        cout << arr[k] << '\n';
    }
    return 0;
}