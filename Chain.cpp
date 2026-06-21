#include<bits/stdc++.h>
using namespace std;
char bd[1000][30000];

void solve() {
    memset(bd, '.', sizeof(bd));
    string txt; cin>>txt;
    int t; cin>>t;
    int sz=2*t+1, l=txt.length();
    
    for(int i=0;i<sz;i++) {
        for(int n=0;n<l;n++) {
            for(int j=0;j<sz;j++) {
                if(abs(i-t)+abs(j-t)==t) bd[i][j+(n*(sz-2))]=txt[n];
            }
        }
    }
    
    for(int i=0;i<sz;i++) {
        for(int j=0;j<sz*l-2*(l-1);j++) {
            cout<<bd[i][j];
        }
        cout<<'\n';
    }
}

int main() {
    solve();
    
    return 0;
}