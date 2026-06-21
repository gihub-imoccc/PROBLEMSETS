#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    int n=0; cin>>n;
    int r=0;
    int g=0;
    while(n>=0) {
        g+=n/800;
        r=n%800;
        if(r>=500) {
            g++;
            r=0;
        }
        cout<<g<<'\n';
        cin>>n;
        if(n<0) break;
        n+=r;
        g=0;
    }
    return 0;
}