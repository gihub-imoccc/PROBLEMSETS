#include<bits/stdc++.h>
using namespace std;
int ana1[8],ana2[8],dana[8];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int cnt=0;
    string s1,s2; cin>>s1>>s2;
    for(char c:s1) {
        int asc=c-'A';
        ana1[asc]++;
    }
    for(char c:s2) {
        int asc=c-'A';
        ana2[asc]++;
    }
    for(int i=0;i<8;i++) {
        dana[i]=abs(ana1[i]-ana2[i]);
        cnt+=dana[i];
    }
    for(int i=0;i<8;i++) cout<<ana1[i]<<' ';
    cout<<'\n';
    for(int i=0;i<8;i++) cout<<ana2[i]<<' ';
    cout<<'\n';
    for(int i=0;i<8;i++) cout<<dana[i]<<' ';
    cout<<'\n';
    if(cnt<=3) cout<<"anagram";
    else cout<<"no";

    return 0;
}