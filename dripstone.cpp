#include<bits/stdc++.h>
using namespace std;
char arr[1000][1000];
int nd=0, l=-1;

void solve() {
    memset(arr, ' ', sizeof(arr));
    int n; cin>>n;
    vector<int> v(n);
    for(auto &k:v) {
        cin>>k;
        if(k>=l) l=k;
    }
    for(int k:v) {
        for(int i=0;i<k;i++) {
            for(int j=0;j<2*k;j++) {
                if(i==j) arr[i][j+nd]=(char)92;
                else if(i+j==k*2-1) arr[i][j+nd]='/'; 
            }
        }
        nd+=k*2;
    }
    for(int i=0;i<l;i++) {
        for(int j=0;j<nd;j++) {
            cout<<arr[i][j];
        }
        cout<<'\n';
    }
}

int main() {
    solve();
    return 0;
}