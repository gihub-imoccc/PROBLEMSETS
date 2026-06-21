#include<bits/stdc++.h>
using namespace std;
const int n = 7e7 + 1;

bool p[n];
set<int> a, b, c;
vector<int> prime;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);
    int l,u; cin >> l >> u;
    p[0]=true;
    p[1]=true;
    p[2] = false;
    for(int i = 2; i < n; i++) {
        if(!p[i]) {
            for(int j = i*2; j < n; j+=i) {
                p[j] = true;
            }
        }
    }
    for(int i = l; i <= u; i++) {
        if(!p[i]) {
            if((!p[i] && !p[i+2]) || (i-2 >= 0 && !p[i-2])) a.insert(i);
            if((!p[i] && !p[i+4]) || (i-4 >= 0 && !p[i-4])) b.insert(i);
            if((!p[i] && !p[i+6]) || (i-6 >= 0 && !p[i-6])) c.insert(i);
        }
    }
    cout << a.size() << '\n' << b.size() << '\n' << c.size();


    return 0;
}