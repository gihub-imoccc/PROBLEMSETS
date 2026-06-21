#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c; cin>>a>>b>>c;
    a+=b;
    a+=c;

    if(a>=80&&a<=100) cout<<'A';
    else if(a>=75&&a<=79) cout<<"B+";
    else if(a>=70&&a<=74) cout<<"B";
    else if(a>=65&&a<=69) cout<<"C+";
    else if(a>=60&&a<=64) cout<<"C";
    else if(a>=55&&a<=59) cout<<"D+";
    else if(a>=50&&a<=54) cout<<"D";
    else cout<<'F';
}

int main() {
    solve();

    return 0;
}