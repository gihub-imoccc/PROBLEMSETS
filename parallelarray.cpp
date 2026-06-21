#include<bits/stdc++.h>
using namespace std;
int arr[201][201]={0};

void solve() {
    int s; cin>>s;
    for(int i=0;i<s-1;i++) {
        for(int j=0;j<i+1;j++) {
            cin>>arr[i+1][j];
            arr[j][i+1]=arr[i+1][j];
        }
    }
    for(int i=0;i<s;i++) {
        for(int j=0;j<s;j++) {
            cout<<arr[i][j]<<' ';
        }
        cout<<'\n';
    }
}

int main() {
    solve();


    return 0;
}