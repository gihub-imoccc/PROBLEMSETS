#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<pair<pair<int, int>, pair<string, string>>> l;
    int q = 1000000;
    while (true) {
        int k;
        string txt, name; cin >> txt;
        if(txt == "New") {
            cin >> name >> k;
            l.push({{k, q}, {name, txt}});
        }
        else if (txt == "Exit") return 0;
        else if(txt == "Call") {
            cout << l.top().second.first << '\n';
            l.pop();
        }
        q--;
    }
    return 0;
}