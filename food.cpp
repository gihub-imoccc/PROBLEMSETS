#include<bits/stdc++.h>
using namespace std;

vector<int> v, show;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int t; cin >> t;
    int no; cin >> no;
    for(int i = 1; i <= t; i++) show.push_back(i);
    for(int i = 0; i < no; i++) {
        int a; cin >> a;
        v.push_back(a);
    }
    sort(show.begin(), show.end());

    do{
        bool f = false;
        for(int i = 0; i < v.size(); i++) {
            if(show[0] == v[i]) {
                f=true;
                break;
            }
        }
        if(!f) {
            for(auto e : show) {
                cout << e << ' ';
            }
            cout << '\n';
        }

        
    }while(next_permutation(show.begin(), show.end()));





    return 0;
}