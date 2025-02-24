#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    int N; cin >> N;
    vector<pair<int,int>> v = {};
    
    for (int i=0; i<N; i++) {
        int addA, addB; cin >> addA >> addB;
        v.push_back(make_pair(addA, addB));
    }

    
    int lo, ;
    





}




// NAIVE

// int main() {
//     ios::sync_with_stdio(false); cin.tie(0); // fast i/o
//     int N; cin >> N;
//     vector<int> v = {};
    
//     for (int i=0; i<N; i++) {
//         int addA, addB; cin >> addA >> addB;
//         v.push_back(addA + (N*addB));
//     }

//     // sort(v.begin(),v.end());
//     sort(v.rbegin(), v.rend());

//     cout << v[N-1];

//     // for (auto x : v) {
//     //     cout << x << "\n";
//     // }

// }