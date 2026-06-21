#include<bits/stdc++.h>
using namespace std;
int n=0,mxl=0,mxr=0,s=0;

int main() {
    int cnt=0;
    cin>>n;
    int arr[n];
    for(int &i:arr) cin>>i;
    for(int i=0;i<n;i++) {
        for(int j=0;j<i;j++) {
            if(arr[j]>mxl) mxl=arr[j];
        }
        for(int k=i+1;k<n;k++) {
            if(arr[k]>mxr) mxr=arr[k];
        }
        s=min(mxl,mxr);
        if(s>=arr[i]&&mxl>0&&mxr>0) cnt+=s-arr[i];
        mxl=0;
        mxr=0;
    }
    cout<<cnt;

    return 0;
}