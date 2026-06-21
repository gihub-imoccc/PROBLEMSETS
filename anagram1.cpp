#include<bits/stdc++.h>
using namespace std;
int arr[8];

int main() {
    string s; cin>>s;
    for(char c:s) {
        int asc=c-'A';
        arr[asc]++;
    }
    for(int i:arr) cout<<i<<' ';

    return 0;
}