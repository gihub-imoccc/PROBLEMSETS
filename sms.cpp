#include<bits/stdc++.h>
using namespace std;
int arr[3][3] = {
    {0,1,2},
    {3,4,5},
    {6,7,8}
};

string s[9] = {
    "",
    "CAB",
    "FDE",
    "IGH",
    "LJK",
    "OMN",
    "SPQR",
    "VTU",
    "ZWXY"
};

int main() {
    int p; cin >> p;
    int p1, ti; cin >> p1 >> ti;
    int x, y;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(arr[i][j] == p1 - 1) {
                x = j;
                y = i;
                break;
            }
        }
    }

    int dx, dy;
    int n;
    string t = "";

    string t1 = s[arr[y][x]];
    if(arr[y][x] == 0) {
        for(int j = 0; j < ti; j++) {
            if(!t.empty()) t.pop_back();
        }
    }
    else if(arr[y][x] != 6 && arr[y][x] != 8) t += t1[ti%3];
    else t += t1[ti%4];

    for(int i = 0; i < p - 1; i++) {
        cin >> dx >> dy >> n;
        x += dx;
        y += dy;

        string tmp = s[arr[y][x]];
        if(arr[y][x] == 0) {
            for(int j = 0; j < n; j++) {
                if(!t.empty()) t.pop_back();
            }
        }
        else if(arr[y][x] != 6 && arr[y][x] != 8) t += tmp[n%3];
        else t += tmp[n%4];
    }
    if(t == "") cout << "null";
    else cout << t;


    return 0;
}