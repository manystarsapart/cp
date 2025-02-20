#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o

    int R, C; cin >> R >> C;
    
    vector<string> rowStrings = {};

    int output = 0;

    for (int i=0; i<R; i++) {
        string tmp; cin >> tmp;
        rowStrings.push_back(tmp);
    }

    
    cout << output;
}