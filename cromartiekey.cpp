#include<bits/stdc++.h>
using namespace std;

int main() {
    int l, k; cin >> l >> k;
    string m1, m2; cin >> m1 >> m2;
    string l1; cin >> l1;

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < k; j++) {
            if((m1[i] <= l1[j] && m1[i] >= m2[i])) {
                l1[j] = m1[i];
            }
            else if(m1[i] <= m2[i] && m1[i] >= l1[j]) {
                l1[j] = m1[i];
            }
            else if(m2[i] <= l1[j]  && m2[i] >= m1[i]) {
                l1[j] = m2[i];
            }
            else if(m2[i] <= m1[i] && m2[i] >= l1[j]) {
                l1[j] = m2[i];
            }
        }
    }
    cout << l1;

    return 0;
}