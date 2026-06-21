#include<bits/stdc++.h>
using namespace std;

int main() {
    int l,n,d=0; cin>>l>>n;
    string w1, w2,w;
    for(int i=0;i<n;i++) {
        if(i==0) cin>>w1;
        else {
            cin>>w2;
            for(int j=0;j<l;j++) {
                if(w1[j]!=w2[j]) d++;
            }
            if(d>2) {
                w=w1;
                for(int j=i+1;j<n;j++) {
                    cin>>w1;
                }
                cout<<w;
                return 0;
            }
            w1=w2;
            d=0;
        }
    }
    cout<<w1;

    return 0;
}