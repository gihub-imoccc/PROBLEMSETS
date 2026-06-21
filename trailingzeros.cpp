#include<bits/stdc++.h>
using namespace std;
int a = 0;

void f(int n) {
    if(n/5 > 0) {
        a += n/5;
        f(n/5);
    }
    else {
        cout << a;
        return;
    }
}

int main() {
    int n; cin >> n;
    f(n);


    return 0;
}