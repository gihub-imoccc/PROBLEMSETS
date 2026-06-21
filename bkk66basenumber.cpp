#include<bits/stdc++.h>
using namespace std;
char arr[6]={'A','B','C','D','E','F'};
int r=0,k=0;
vector<int> v1,v2;

void c10(string n) {
    int i=n.length()-1;
    for(char c:n) {
        if(c>='0'&&c<='9') {
            r+=pow(16,i)*(c-'0');
        }
        else {
            r+=pow(16,i)*(c-'A'+10);
        }
        i--;
    }
    k=r;
}

void c2(int n) {
    if(n==0) {
        for(int i=v2.size()-1;i>=0;i--) {
            cout<<v2[i];
        }
        cout<<'\n';
        return;
    }
    v2.push_back(k%2);
    if(n>0) c2(k/=2);
}

void c8(int n) {
    if(n==0) {
        for(int i=v1.size()-1;i>=0;i--) {
            cout<<v1[i];
        }
        return;
    }
    v1.push_back(r%8);
    if(n>0) c8(r/=8);
}


int main() {
    string n; cin>>n;
    c10(n);
    c2(r);
    c8(r);
    return 0;
}