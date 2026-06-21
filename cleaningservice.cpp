#include<bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int arr[1000][1000];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n, x = 1, y = 1, ans = 0; cin >> n;
    string t; cin >> t;
    string tmp = "";

    for(int i = 2; i < t.length() - 1; i++) {
        char c = t[i];
        
        if(c >= '0' && c <= '9') {
            tmp += c;
        }
        else {
            if(tmp != "") { 
                int n = stoi(tmp);
                arr[y][x] = n;
                tmp = "";
            }
            if(c == ',') x++;
            else if(c == '[') y++;
            else if(c == ']') x = 0;
        }
    }
    for(int i = 1; i < n + 1; i++) {
        for(int j = 1; j < n + 1; j++) {
            if(arr[i][j] > 0) {
                ans += arr[i][j] * 4 + 2;
                for(int k = 0; k < 4; k++) {
                    int no = min(arr[i][j], arr[i + dy[k]][j + dx[k]]);
                    ans -= no;
                }
            }
        }
    }
    cout << ans;

    return 0;
}

