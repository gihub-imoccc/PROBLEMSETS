#include<bits/stdc++.h>
using namespace std;
int arr[10], s = 0;

int main() {
    for(int i = 1; i <= 9; i++) {
        cin >> arr[i];
        s += arr[i] * (10 - i + 1);
    }
    if(11 - (s % 11)==11) cout<<0;
    else cout << 11 - (s % 11);
    
    return 0;
}