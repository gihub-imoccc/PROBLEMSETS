#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m; cin>>n>>m;
    n*=m;
    if(n/60!=0&&n%60!=0) cout<<n/60<<" hours "<<n%60<<" minutes";
    else if(n%60==0) cout<<n/60<<" hours";
    else cout<<"No teaching";
    return 0;
}