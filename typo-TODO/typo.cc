#include <bits/stdc++.h> 
using namespace std;

bool hasTypo(string s, string t) { 
    vector<int> diff = {};
    for (int i = 0; i < int(s.length()); i++) {
        if (s[i] != t[i]) {
            diff.push_back(i);
        }
    }
    if (diff.size() != 2) {
        return false;
        }

    return (s[diff[0]] == t[diff[1]] && 
            s[diff[1]] == t[diff[0]]);
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