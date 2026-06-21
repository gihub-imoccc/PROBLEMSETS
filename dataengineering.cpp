#include<bits/stdc++.h>
using namespace std;



int main() {
    cin.tie(0)->sync_with_stdio(0);

    int mx=-999;

    int N; cin >> N;
    vector<int> v(N);

    for(auto &e : v) cin >> e;
    
    vector<string> base2;

    for(auto e : v) {
        string t="";
        int i = e;

        while(i > 0) {
            t += to_string(i%2);
            i /= 2;
        }

        reverse(t.begin(), t.end());

        // cout << t << '\n';

        base2.push_back(t);
    }

    sort(base2.begin(), base2.end());

    do{
        string t = "";

        for(auto e : base2) t += e;
        // cout << t << '\n';

        int base10 = 0;

        for(int i = 0; i < t.length(); i++) {

            base10 += pow(2, (t.length()-1-i))*(t[i]-'0');
        }
        
        if(base10 > mx) mx = base10;

    }while(next_permutation(base2.begin(), base2.end()));

    cout << mx;


    return 0;
}