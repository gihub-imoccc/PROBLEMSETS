#include<bits/stdc++.h>
using namespace std;

int lv[10];
vector<int> v1, v2, v3, v4, v5, v6, v7, v8, v9, v10;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    queue<int> q;
    
    int l, n, a, b; cin >> l >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a == 1) v1.push_back(b);
        else if(a == 2) v2.push_back(b);
        else if(a == 3) v3.push_back(b);
        else if(a == 4) v4.push_back(b);
        else if(a == 5) v5.push_back(b);
        else if(a == 6) v6.push_back(b);
        else if(a == 7) v7.push_back(b);
        else if(a == 8) v8.push_back(b);
        else if(a == 9) v9.push_back(b);
        else if(a == 10) v10.push_back(b);
    }


    return 0;
}