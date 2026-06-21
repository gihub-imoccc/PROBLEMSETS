#include<bits/stdc++.h>
using namespace std;
const int M = 2e5+5;

bool p[M];

void f() {
    string n; cin >> n;

    vector<char> v;
    for(auto e:n) v.push_back(e);

    int cnt = 0;
    sort(v.begin(), v.end());
    do{
        string N="";

        for(auto e : v) N += e;

        int k = stoi(N);

        if(p[k] == false) cnt++;




    }while(next_permutation(v.begin(), v.end()));


    cout << cnt << '\n';
}

int main() {
    cin.tie(0)->sync_with_stdio(0);


    int t; cin >> t;
    int l; cin >> l;

    p[0]=true;
    p[1] =true;
    
    for(int i = 2; i < M; i++) {
        if(p[i] == true) continue;

        // cout << i << ' ';

        for(int j = 2*i; j < M; j+=i) {
            p[j]=true;
        }
    }

    while(t--) {
        f();
    }


    return 0;
}