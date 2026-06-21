#include<bits/stdc++.h>
using namespace std;

bool isprime(int a) {
    if(a==2) return true;
    else if(a%2==0) return true;
    else {
        for(int i=3;i<a;i+=2) {
            if(a%i==0) return false;
        }
        return true;
    }
}

void solve() {
    int n; cin>>n;
    vector<int> prime={2};
    for(int i=3;i<n;i+=2) {
        if(isprime(i)) prime.push_back(i);
    }
    for(int i:prime) {
        if(i<n) cout<<i<<'\n';
        else return;
    }
}

int main() {
    solve();


    return 0;
}