// #include<bits/stdc++.h>
// using namespace std;

// int l = 0;
// string t = "";
// vector<string> v;

// bool check(string t1, string t2) {
//     int cnt = 0;
//     for(int i = t1.size()-1; i >= 0; i--) {
//         if(t1[i] != t2[i]) cnt++;
//         if(cnt == 2) break;
//     }

//     if(cnt == 1) return true;
//     return false;
// }

// void rec(int n) {
//     if(n == l) {
//         // cout << t << '\n';
//         v.push_back(t);
//         return; 
//     }

//     t += '0';
   
//     rec(n + 1);
//     t.pop_back();
 

//     t += '1';
 
//     rec(n + 1);
   
//     t.pop_back();

// }


// int main() {
//     cin.tie(0)->sync_with_stdio(0);

//     cin >> l;

//     rec(0);

//     for(int i = 0; i  < v.size()-1; i++)  {
//         for(int j = i + 1; j < v.size(); j++)  {
//             if(check(v[i], v[j])) cout << v[i] << ' '  << v[j] << '\n';
//         }
//     }



//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
#define pss pair<string, string>
#define all(x) x.begin(), x.end()

string t = "", t1 = "";
vector<pss> ans;
int l = 0;

void p(string t1) {
    string tmp = t1;

    for(int i = t.length()-1; i >=0 ; i--) {
        tmp[i] = '0';

        if(t != tmp) {
            // cout << tmp << ' ' << t << '\n';
            ans.push_back({tmp, t});
            
        }
        
        tmp = t1;
    }
}

void rec(int n)  {
    if(n == l)  {
        // cout << t << '\n';
        p(t);
        return;
    }

    t += '0';
    rec(n  + 1);
    t.pop_back();

    t += '1';
    rec(n + 1);
    t.pop_back();
}




int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> l;

    rec(0);

    sort(all(ans));
    for(auto e : ans) {
        cout << e.first << ' ' << e.second << '\n';
    }



    return 0;
}