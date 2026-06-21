#include<bits/stdc++.h>
using namespace std;

char a[81][81];

void clr() {
    for(int i = 0; i < 81; i++) {
        for(int j = 0; j < 81; j++) {
            a[i][j] = '.';
        }
    }
}

void draw() {
    int n; cin >> n;
    clr();
    
    if(n%2 != 0) {
        n = (n-1)/2;
        for(int i = 0; i < 2*n+1; i++) {
            for(int j = 0; j < 2*n+1+n-1; j++) {    
                if(abs(i-n) + abs(j-n) == n) {
                    a[i][j]='#';
                    a[i][j+2*n]='#';
                }
                else if(abs(i-n) + abs(j-n) < n) {
                    a[i][j] = '=';
                    a[i][j+2*n] = '=';
                }
                if((i>0 && i < 2*n) && j == 3*n-1) a[i][j] = '#';
                cout << a[i][j];
            }
            cout << '\n';
        }
    }
    else {
        n = (n)/2;
        int m = n-1;
        for(int i = 0; i < 2*n; i++) {
            for(int j = 0; j < 2*n+n-1; j++) {
                if(i+j == n-1 || abs(i-j) == n || i+j == 3*n-1 || ((i>0 && i<2*n-1) && j == 3*n-2)) a[i][j] = '#';
                else if((i+j <= 2*n+n-1 && abs(i-j) <= n-1 && i+j >= n-1)) {
                    a[i][j] = '=';
                    a[i][j+2*n] = '=';
                }
                
                cout << a[i][j];
            }
            cout << '\n';
        }
    }

    
    
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) {
        draw();
    }
    
    return 0;
}