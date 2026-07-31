#include<bits/stdc++.h>
using namespace std;

int arr[1001][1001];
int a, b, c, d;
bool p[5]; 



int main() {
    cin.tie(0)->sync_with_stdio(0);
    int N, M; cin >> N >> M;

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            cin >> arr[i][j];
        }
    }

    int q; cin >> q;
    for(auto & e : p) e = false;
    
    for(int i = 0; i < q; i++) {
        int x, y; cin >> y >> x;

        if(x >= 1 && x <= M && y >= 1 && y <= N) {
            int it = arr[y][x];
           
            for(auto & e : p) e = false;

            if(it > 0) {
                a++;
                p[1] = true;
            }
            if(it < 0) {
                b++;
                p[2] = true;
            }
            if(it % 2 == 0) {
                c++;
                p[3] = true;
            }
            if(it % 2 != 0) {
                d++;
                p[4] = true;
            }
            continue;
        }

        if(p[1]) a++;
        if(p[2]) b++;
        if(p[3]) c++;
        if(p[4]) d++;
        
    }

    cout << a << ' ' << b << ' ' << c << ' '<< d;    
    return 0;
}