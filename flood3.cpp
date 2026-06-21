#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int s; cin >> s;
    

    vector<int> v(s, 0);
    
    for(auto &e : v) cin >> e;

    int cnt = 0;

    for(int i = 1; i < s-1; i++) {
        int mxl=-1, mxr=-1;

        for(int j = 0; j < i; j++) {
            if(v[j] > mxl) mxl = v[j];
        }
        for(int j = i+1; j < s; j++) {
            if(v[j] > mxr) mxr = v[j];
        }

        if(mxl!=-1 && mxr!=-1 &&  v[i] < mxl  &&  v[i] < mxr) cnt+=min(mxl, mxr)-v[i];

        


    }
    cout << cnt;


    return 0;
}