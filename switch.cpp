#include<bits/stdc++.h>
using namespace std;

void prob() {
    int l, cnt=0; cin>>l;
    string n; cin>>n;
    // for(int i=0;i<l;i++) {
    //     if(n[i]=='0') {
    //         for(int j=i+1;j<l;j++) {
    //             if(n[j]=='0') n[j]='1';
    //             else n[j]='0';
    //         }
    //         cnt++;
    //     }
    // }
    // cout<<cnt;
    
    for(int i=0;i<l;i++) {
        if((n[i]=='0'&&cnt%2==0)||(n[i]=='1'&&cnt%2!=0)) cnt++;
    }
    cout<<cnt;
}

int main() {
    prob();
    return 0;
}