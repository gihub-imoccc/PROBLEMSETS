// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// bool f(ll i, ll j, string t) {
//     while(i <= j) {
//         if((t[i] == '1' && t[j] ==  '1') || (t[i] == '0' && t[j] == '0') || (t[i] == '8' && t[j] == '8') || (t[i] == '6' && t[j] == '9') || (t[i] == '9' && t[j] == '6')) {

//             i++;
//             j--;
//         }
//         else {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     cin.tie(0)->sync_with_stdio(0);

//     ll l, u;
//     cin >> l >> u;

//     ll cnt = 0;

//     while(l <= u) {

//         auto t = to_string(l);


//         int i = 0, j = t.length()-1;

//         if(f(i, j, t)) cnt++;

//         l++;



//     }
//     cout << cnt;


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// vector<string> strobo;
// // string t1="", t2="";

// void rec(int n,  string t1, string t2) {
//     if(n == 4)  {
//         cout << t1  << '\n';
//         return;
//     }

//     rec(n + 1, t1 += '0', t2);
//     t1.pop_back();
//     rec(n + 1, t1 += '1', t2);
//     t1.pop_back();
//     rec(n + 1, t1 += '8', t2);
//     t1.pop_back();
//     rec(n + 1, t1 += '6', t2);
//     t1.pop_back();
//     rec(n + 1, t1 += '9', t2);
    





// }

// int main() {
//     cin.tie(0)->sync_with_stdio(0);

//     rec(0, "", "");


//     return 0;
// }





