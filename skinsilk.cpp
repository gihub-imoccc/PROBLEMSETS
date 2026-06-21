#include<bits/stdc++.h>
using namespace std;
char arr[50000][100];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(nullptr);
    for(int i=0;i<50000;i++) {
        for(int j=0;j<100;j++) {
            arr[i][j]='o';
        }
    }
    int p,q,r,n,mx=0; cin>>p;
    for(int i=0;i<p;i++) {
        cin>>q>>r>>n;
        if(q>mx) mx=q;
        for(int j=0;j<n;j++) {
            arr[q-1][r+j-1]='x';
        }
    }
    for(int i=0;i<mx;i++) {
        for(int j=0;j<70;j++) {
            cout<<arr[i][j];
        }
        cout<<'\n';
    }


    return 0;
}