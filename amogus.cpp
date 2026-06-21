#include<bits/stdc++.h>
using namespace std;
char arr[201][201];


void solve() {
    int n,c=0; cin>>n;
    memset(arr, ' ', sizeof(arr));

    for(int i=0;i<n;i++) {
        for(int j=0;j<3*n;j++) {
            arr[c][j+n]='#';
        }
        c++;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<2*n;j++) {
            arr[c][j]='#';
        }
        c++;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<4*n;j++) {
            arr[c][j]='#';
        }
        c++;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            arr[c][j+n]='#';
        }
        for(int j=0;j<n;j++) {
            arr[c][j+3*n]='#';
        }
        c++;
    }
    for(int i=0;i<4*n;i++) {
        for(int j=0;j<4*n;j++) {
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
    
}

int main() {
    solve();

    return 0;
}