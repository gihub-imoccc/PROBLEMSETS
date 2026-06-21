#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);    cin.tie(0);
    stack<int> s;
    int n; cin >> n;
    while(n--) {
        string t; cin >> t;
        if (t == "push") {
            int k; cin >> k;
            s.push(k);
        }
        else if (t == "pop") {
            if(s.size() != 0) {
                cout << s.top();
                s.pop();
            }
            else cout << "null";
            cout << '\n';
        }
    }

    return 0;
}