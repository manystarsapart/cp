#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    for (int i = 1; i < n + 1; i++) {
        // cout << string(i, "*");
        string output = "";
        for(int x = 0; x < i; x++) {
            output += "*";
        }
        cout << output << "\n";
    }
}