#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    string name; getline(cin, name);
    int g, a, s; cin >> g >> a >> s;
    string t;

    if(g == 1) {
        if(a < 15) t = "Master ";
        else t = "Mr. ";
    }
    else {
        if(a < 15) t = "Miss ";
        else {
            if(s == 0) t = "Miss ";
            else t = "Mrs. ";
        }
    }
    cout << t << name;



    return 0;
}