#include<bits/stdc++.h>
using namespace std;
int arr[20000];
int n, t, m=0;

void prob() {
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>t;
        arr[t]+=1;
    }
    for(int i=0;i<=10000;i++) {
        if(arr[i]>m) m=arr[i]; 
    }
    for(int i=0;i<=10000;i++) {
        if(arr[i]==m) cout<<i<<' ';
    }
}

int main() {
    prob();
    return 0;
}