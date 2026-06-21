#include<bits/stdc++.h>
using namespace std;
char arr[10][20];
int cnt;
    
int digit(int n) {
    if(n<=0) return cnt;
    if(n>0) {
        cnt++;
        return digit(n/10);
    }
    return cnt;
}

void setboard() {
    memset(arr, '*', sizeof(arr));
    for(int i=0;i<15;i++) {
        arr[2][i]=' ';
        arr[3][i]='-';
        arr[4][i]=' ';
    }
    for(int i=0;i<15;i++) {
        if(i%2!=0) {
            for(int j=0;j<10;j++) {
                arr[j][i]=' ';
            }
        }
    }
    for(int i=0;i<17;i++) {
        arr[3][i]='-';
    }
}

void solve() {
    setboard();
    int n; cin>>n;
    int dig=digit(n);
    for(int i=0;i<dig;i++) {
        if(n%10>0) {
            if(n%10<5) {
                arr[n%10+4][14-2*i]=' ';
                arr[4][14-2*i]='*';
                
            }
            else {
                arr[1][14-2*i]=' ';
                arr[2][14-2*i]='*';

                if(n%10>5) {
                    int r=n%10-5;
                    arr[r+4][14-2*i]=' ';
                    arr[4][14-2*i]='*';
                }
            }
        }
        n/=10;
    }
    for(int i=0;i<10;i++) {
        for(int j=0;j<15;j++) {
            cout<<arr[i][j];
        }
        if(i==3) {
            cout<<arr[3][0]<<arr[3][0];
        }
        cout<<'\n';
    }

}

int main() {
    solve();
    return 0;
}