#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long arr[201];
    long long plus[201];
    arr[0]=0;
    plus[0]=4;
    for(int i=1;i<201;i++) {
        plus[i]=plus[i-1]+6;
        arr[i]=arr[i-1]+plus[i-1];
    }
    int t; cin>>t;
    cout<<arr[t];
}

int main() {
    solve();
    return 0;
}