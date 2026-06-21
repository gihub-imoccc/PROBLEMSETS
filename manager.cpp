#include<bits/stdc++.h>
using namespace std;
int arr[100000];

int main() {
    int n; cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int lb,ub,s=0,cnt=0; cin>>lb>>ub;

    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            s+=arr[j];
            if(s>=lb&&s<=ub) cnt++;
        }
        s=0;
    }
    cout<<cnt;

    return 0;
}