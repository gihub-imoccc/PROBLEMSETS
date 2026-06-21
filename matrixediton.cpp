#include<bits/stdc++.h>
using namespace std;

void solve() {
    int x,y, t; cin>>y>>x;
    int arr1[y][x];

    for(int i=0;i<y;i++) {
        for(int j=0;j<x;j++) {
            cin>>arr1[i][j];            
        }
    }
    for(int i=0;i<y;i++) {
        for(int j=0;j<x;j++) {
            cin>>t;
            arr1[i][j]+=t;
            cout<<arr1[i][j]<<' ';
        }
        cout<<'\n';
    }

}

int main() {
    cin.tie(nullptr);
    solve();



    return 0;
}