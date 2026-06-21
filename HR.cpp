#include<bits/stdc++.h>
using namespace std;
int arr1[3], arr2[3];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    bool p1 = false, p2 = false;

    string t1, t2; cin >> t1 >> t2;
    string tt1 = t1.substr(8, 9), tt2 = t2.substr(8, 9);
    
    int sm1 = 0, sm2 = 0;

    for(int &i : arr1) {
        cin >> i;
        sm1 += i;
    }
    for(int &i : arr2) {
        cin >> i;
        sm2 += i;
    }

    int a1 = arr1[0], a2 = arr2[0], s1 = arr1[2], s2 = arr2[2];

    if(sm1 > sm2) p1 = true;
    else if(sm2 > sm1) p2 = true;
    else {
        
        if(a1 > a2) p1 = true;
        else if(a2 > a1) p2 = true;
        else {
            
            if (s1 > s2) p1 = true;
            else if(s2 > s1) p2 = true;
            else {

                if(t1[2] == '3' && t2[2] != '3') p1 = true;
                else if(t2[2] == '3' && t1[2] != '3') p2 = true;
                else {
                    
                    if(tt1 == "21" && tt1 != tt2) p1 = true;
                    else if(tt2 == "21" && tt1 != tt2) p2 = true;
                    else {
                        
                        tt1 = t1.substr(0, 2);
                        tt2 = t2.substr(0, 2);
                        int l1 = stoi(tt1);
                        int l2 = stoi(tt2);
                        if(l1 < l2) p1 = true;
                        else if(l2 < l1) p2 = true;
                    }
                }
            } 
        }
    }
    if(p1 || p2) {
        cout << "Win: ";
        if(p1 && p2) cout << "No one.";
        else if(p1) cout << t1;
        else if(p2) cout << t2;
    }
    else cout << "No one.";
    
    
    return 0;
}