#include<bits/stdc++.h>
using namespace std;
char arr[1001][1001];

void solve() {
    int n, m, q, x, y; cin>>n>>m>>q;
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<q;i++) {
        cin>>x>>y;
        cout<<arr[x][y]<<'\n';
    }
    
}

int main() {
    solve();


    return 0;
}