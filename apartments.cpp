#include<bits/stdc++.h>
using namespace std;
const int N = 2e5+7;

vector<int> room, people;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int r, p, d; cin >> r >> p >> d;
    int q;
    for(int i = 0; i < r; i++) {
        cin >> q;
        room.push_back(q);
    }
    for(int i = 0; i < p; i++) {
        cin >> q;
        people.push_back(q);
    }

    sort(room.begin(), room.end());
    sort(people.begin(), people.end());

    int ans = 0;
    int j = 0;
    for(int i = 0; i < r; i++) {
        
        while(room[i]-d > people[j]) {
            if(j < p) j++;
            else break;
        }
        if(room[i]-d <= people[j] && people[j] <= room[i]+d) {
            ans++;
            j++;
            if(j>=p) break;
        }
    }
    cout << ans;


    return 0;
}