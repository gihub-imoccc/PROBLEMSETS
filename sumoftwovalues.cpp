#include<bits/stdc++.h>
using namespace std;
 
priority_queue<int> pq; 
map<int, vector<int>> m;
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
 
    int s, x; cin >> s >> x;
    
 
    for(int i = 0; i < s; i++) {
        int a; cin >> a;
        pq.push(a);

        if(m[a].size() == 2) continue; 
        
        m[a].push_back(i+1);
    }
 
    while(!pq.empty()) {
        if(m[x-pq.top()].size() > 0 && pq.top() != x-pq.top()) {
            if(m[x-pq.top()][0] < 0) break;
            cout << m[pq.top()][0] << ' ' << m[x-pq.top()][0];
            return 0;
        }
        if(m[x-pq.top()].size() > 0 && pq.top() == x-pq.top()) {
            if(m[x-pq.top()][1] < 0 || m[x-pq.top()].size() <= 1) break;
            cout << m[pq.top()][0] << ' ' << m[x-pq.top()][1];
            return 0;
        }
        
        pq.pop();
    }
    cout<<"IMPOSSIBLE";
 
 
 
 
    
    return 0;
}
