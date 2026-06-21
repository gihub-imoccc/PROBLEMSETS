#include<bits/stdc++.h>
using namespace std;
int arr[100];
// int rem[50];
int n, cnt=0;
// set<int> r;

void prob() {
    // for(int i=0;i<10;i++) {
    //     cin>>arr[i];
    //     r.insert(arr[i]%42);
    // }
    // cout<<r.size();

    for(int i=0;i<10;i++) {
        cin>>n;
        arr[n%42]=1;
    }
    for(int i=0;i<50;i++) {
        if(arr[i]>0) cnt++;
    }
    cout<<cnt;
}

int main() {
    prob();
    return 0;
}