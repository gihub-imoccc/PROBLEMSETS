#include<bits/stdc++.h>
using namespace std;
int arr[100000];

int main() {
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int mx=0,s=0,x,y;

    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            // cout<<s<<' ';
            s+=arr[j];
            if(s>mx) {
                mx=s;
                // cout<<"now "<<mx<<'\n';
                // for(int k=i;k<j+1;k++) cout<<arr[k]<<' ';
                // cout<<'\n';
                x=i;
                y=j+1;
            }
        }
        s=0;
    }
    
    if(mx<=0) cout<<"Empty sequence";
    else {
        for(int i=x;i<y;i++) {
            cout<<arr[i]<<' ';
        }
        cout<<'\n'<<mx;
    }
    

    return 0;
}