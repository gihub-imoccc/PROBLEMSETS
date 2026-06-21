#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int n; cin >> n;
    while(n--) {
        string t; cin >> t;
        if(t == "push") {
            int k; cin >> k;
            q.push(k);
        }
        else {
            if(q.size() !=0 ) {
                cout << q.front();
                q.pop();
            }
            else {
                cout << "null";
            }
            cout << '\n';
            
        }
    }
    return 0;
}