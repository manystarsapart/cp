#include <bits/stdc++.h> 
using namespace std;

// bool hasTypo(string s, string t) { 
//     vector<int> diff = {};
//     bool typo = false;
//     for (int i = 0; i < int(s.length()); i++) {
        
//         if (s[i] != t[i]) {
//             diff.push_back(i);
//             if (s[i+1] != t[i+1]) {
//                 typo = true;
//                 break;
//             } else {break;}
//         }
//     }
//     if (diff.size() != 2) {
//         typo = false;
//         }

//     return (s[diff[0]] == t[diff[1]] && 
//             s[diff[1]] == t[diff[0]] &&
//             typo);
// }


bool hasTypo(string s, string t) {
    // s == t already checked
    for (int x = 0; x < int(s.size()-1); x++) {
        swap(s[x], s[x+1]);
        if (s == t) {
            return true;
        } else {
            swap(s[x], s[x+1]);
        }
    }
    return false;
}

int main() {
    string S, T;
    cin >> S;
    cin >> T;
    
    if (S == T || hasTypo(S, T)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}