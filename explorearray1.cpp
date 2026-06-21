#include<bits/stdc++.h>
using namespace std;
int arr[400][400];

int main() {
    int a=0,b=0,cn=0,d=0;
    int r,c; cin>>r>>c;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            cin>>arr[i][j];
        }
    }
    int n,x,y; cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x>>y;
        if((x>=1&&x<=r)&&(y>=1&&y<=c)) {
            // cout<<arr[x-1][y-1];
            int t=arr[x-1][y-1];
            if(t>0) a++;
            if(t<0) b++;
            if(t%2==0) cn++;
            if(t%2!=0) d++;
        }
    }
    cout<<a<<' '<<b<<' '<<cn<<' '<<d;
    return 0;
}