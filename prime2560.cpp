#include<bits/stdc++.h>
using namespace std;
vector<int> p={};

bool isprime(int n) {
    if(n<2) return false;
    if(n%2==0) return false;
    if(n==2) return true;

    for(int i=3;i<=sqrt(n);i+=2) {
        if(n%i==0) return false;
    }
    return true;
    
}

void prob() {
    p.push_back(2);
    int n; cin>>n;
    for(int i=3;i<=100;i+=2) {
        if(isprime(i)) {
            p.push_back(i);
        }
    }
    for(int i:p) {
        if(i<n) cout<<i<<'\n';
        else return;
    }
}

int main() {
    prob();
    return 0;
}