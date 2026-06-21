#include<bits/stdc++.h>
using namespace std;

char arr[51][51];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    char c1, c2; cin >> c1 >> c2;
    int n, t; cin >> n >> t;

    
    for(int i = 0; i < n; i++) {
        for(int k = 0; k < t; k++) {
            for(int j = 0; j < 2*n; j++) {
                arr[i][j] = '.';
                if(i == j || i+j == 2*n-1) arr[i][j] = c1;
                if(i+j == n-1 || j-i == n) arr[i][j] = c2;
                
                cout << arr[i][j];
            }
        }
        cout << '\n';
    }

    return 0;
}