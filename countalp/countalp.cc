#include <bits/stdc++.h> 
using namespace std;

int returnVal(char x) {
    return (int)x - 97;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o

    int n; cin >> n;
    string input; cin >> input;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<pair<char,int>> alp = {};

    // making alphabet vector
    for (auto x : alphabet) {
        alp.push_back(make_pair(x,0));
    }
    
    // iterating through to add values
    for (auto x : input) {
        int xchar = returnVal(x);
        alp[x].second++;
    }

    for (auto x : alp) {
        cout << x.first << " " << x.second << "\n";
    }


}