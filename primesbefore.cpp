#include<bits/stdc++.h>
using namespace std;
int arr[5];

bool isprime(int n) {
    if(n<2) return false;
    if(n==2) return true;
    else if(n%2==0) return false;
    for(int i=3;i<=sqrt(n);i+=2) {
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int n,cnt=0; cin>>n;
    for(int i=n-1;i>0;i--) {
        if(isprime(i)) {
            arr[cnt]=i;
            cnt++;
        }
        if(cnt==5) break;
    }
    for(int i=4;i>=0;i--) {
        cout<<arr[i]<<' ';
    }

    return 0;
}