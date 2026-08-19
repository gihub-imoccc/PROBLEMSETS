#include<bits/stdc++.h>
using namespace std;

bool arr[107];

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    arr[6] = true;
    arr[9] = true;
    arr[20] = true;

    int n; cin >> n;
    if(n >= 6) {
        for(int i = 1; i <= n; i++) {
            if(arr[i] == true) {
                cout << i << '\n';
                arr[i + 6] = true;
                arr[i + 9] = true;
                arr[i + 20] = true;
            }
        }
    }
    else cout << "no";

    return 0;
}