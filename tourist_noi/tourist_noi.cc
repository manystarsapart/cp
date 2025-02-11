#include <bits/stdc++.h> 
using namespace std;

int getLowerDayCost(int trips, int p, int q) {
    return min(trips*p, q);
    }

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    int n, x, y; cin >> n >> x >> y;
    int output = 0;
    vector<int> a = {};
    for (int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }
    for (auto i : a) {
        output += min(i*x, y);
    }

    cout << output;
}


