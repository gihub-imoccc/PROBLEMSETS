#include<bits/stdc++.h>
using namespace std;
int n, cnt=0, run=0,lmax=-1, rmax=-1;
vector<int> arr(n);

int findnext(int &run) {
    if(run==n-1) return run;
    
    if(arr[run]>=arr[run+1]&&lmax==-1) {
        lmax=run;
        return run;
    }
    if(rmax==-1) {
        if(arr[run]<arr[lmax]) {
            run++;
            return findnext(run);
        }
        else return run;
    }

    if(arr[run]>arr[run+1]) {
        return run;
    }
    return run;
}

void solve() {
    cin>>n;
    arr.resize(n);
    for(int &x:arr) cin>>x;

    while(run!=n-1) {
        int a=findnext(run);
        run++;
        int b=findnext(run);
        while(b<a&&run<n) {
            run++;
            b=findnext(run);
        }
        if(arr[b]<=arr[b-1]&&run==n-1) break;
        else {
            for(int i=a+1;i<b;i++) {
                if(arr[a]<=arr[b]) cnt+=arr[a]-arr[i];
                else cnt+=arr[b]-arr[i];
                
            }
        }
    }
    cout<<cnt;

}

int main() {
    solve();
    
    return 0;
}