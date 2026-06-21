#include<bits/stdc++.h>
using namespace std;
string hxa; 
int deca=0, res=0;

int hexa2dec(char n) {
    if(i>hxa.length()) return;
    else {
        res+=
        return hexa2dec(hxa[i+1]);
    }
}

void solve() {
    cin>>hxa;
    int n=0;
    for(int i=1;i<=hxa.size();i--) {
        if(hxa[i]>='A'&&hxa[i]<='Z') n+=pow(16, hxa.length()-i-1)*((int)hxa[i]-55);
        else n+=pow(16, hxa.length()-i-1)*(hxa[i]-'0');
    }
    cout<<n;
}

int main() {
    solve();
    return 0;
}