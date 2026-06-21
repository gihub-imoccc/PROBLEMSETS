#include<bits/stdc++.h>
using namespace std;

int arr[1000005];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int t; cin >> t;
        arr[i] = t;
    }
    int sum = 0, s, e;
    cin >> s >> e;
    for(int i = s; i < e + 1; i++) {
        sum += arr[i];
    }
    cout << sum;


    return 0;
}