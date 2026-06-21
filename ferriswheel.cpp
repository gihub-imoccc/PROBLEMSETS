#include<bits/stdc++.h>
using namespace std;

vector<int> w;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    int mx; cin >> mx;

    for(int i = 0; i < n; i++) {
        int q; cin >> q;
        w.push_back(q);
    }

    sort(w.begin(), w.end());

    int j = w.size()-1;
    int ans = 0;
    for(int i = 0; i < w.size(); i++) {
        if(i < j) {
            while(w[i]+w[j] > mx) {
                ans++;
                j--;
                if(i == j) {
                    ans++;
                    break;
                }
            }

            if(w[i] + w[j] <= mx) {
                ans++;
                j--;
                continue;
            }
        }
        else {
            if(i == j) ans++;
            break;
        }
    }
    cout << ans;

    return 0;
}