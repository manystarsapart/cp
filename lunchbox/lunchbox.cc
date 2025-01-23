#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, m; cin >> N >> m;
    int output = 0;
    vector<int> ki = {};
    for (int i=0; i<m; i++) {
        // vector of ki s
        int add; cin >> add;
        ki.push_back(add);
    }
    sort(ki.begin(),ki.end());
    for (auto x : ki) {
        if (N - x >= 0) {
            output++;
            N -= x;
        } else {
            break;
        }
    }
    cout << output;
}
