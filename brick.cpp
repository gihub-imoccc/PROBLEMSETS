#include<bits/stdc++.h>
using namespace std;
char arr[100][100];
int nm[100], ps[100];

int main() {
    ios_base::sync_with_stdio(0);
    int n,m; cin>>n>>m;

    // for(int &i:nm) i=0;
    for(int &i:ps) i=n;
    for(int i=1;i<n+1;i++) {
        for(int j=0;j<m;j++) {
            // arr[i][j]='.';
            cin>>arr[i][j];
            if(arr[i][j]=='O'&&ps[j]==n) {
                ps[j]=i-1;
            }
        }
    }
    for(int i=0;i<m;i++) arr[0][i]='-';

    for(int i=0;i<m;i++) {
        cin>>nm[i];
        for(int j=0;j<nm[i];j++) {
            if(arr[ps[i]-j][i]!='-') arr[ps[i]-j][i]='#';
        }
    }


    for(int i=1;i<n+1;i++) {
        for(int j=0;j<m;j++) {
            cout<<arr[i][j];
        }
        cout<<'\n';
    }

    return 0;
}