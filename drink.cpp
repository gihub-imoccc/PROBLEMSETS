#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int k; cin >> k;
    for(int i = 1; i <= k; i++) q.push(i);
    int n; cin >> n;
    int p = 1;
    while(k>0) {
        if(p % n == 0) {
            cout << q.front()  << ' ';
            q.pop();
            k--;
        }
        else {
            int t = q.front();
            q.push(t);
            q.pop();
        }
        p++;
    }

    return 0;
}