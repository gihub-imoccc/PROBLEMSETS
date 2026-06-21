#include<bits/stdc++.h>
using namespace std;
char arr[1000][1000];

void solve() {
    memset(arr, ' ', sizeof(arr));
    int n; cin>>n;
    char al[21]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U'};
    for(int i=0;i<n*2-1;i++) {
        for(int j=0;j<n*2-1;j++) {
            if(i==j||i+j==n*2-2) {
                arr[i][j]=al[abs(n-i-1)];
                arr[i][(j+n*2)]='*';
            }
        }
    }
    
    for(int i=0;i<(n*2-1);i++) {
        for(int j=0;j<(n*2-1+n+n*2-1);j++) {
            cout<<arr[i][j];
        }
        cout<<'\n';
    } 
}

int main() {
    solve();
    return 0;
}