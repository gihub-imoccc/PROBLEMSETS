#include<bits/stdc++.h>
using namespace std;
int arr1[2001], arr2[2001];

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    int c = 0;
    for(int i = 0; i < n; i++) {
        c += abs(arr1[i] - arr2[i]);
    }
    cout << c;

    return 0;
}