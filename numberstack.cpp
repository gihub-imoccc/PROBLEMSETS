#include<bits/stdc++.h>
using namespace std;
stack<int> stck;

int main() {
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        if(s != "+" && s != "-" && s != "*" && s != "/") {
            stck.push(stoi(s));
        }
        else {
            int n1 = stck.top(); stck.pop();
            int n2 = stck.top(); stck.pop();

            if(s == "+") stck.push(n1 + n2);
            else if(s == "-") stck.push(n2 - n1);
            else if(s == "*") stck.push(n2 * n1);
            else if(s == "/") stck.push(n2 / n1);
        }
    }
    cout << stck.top();
    return 0;
}