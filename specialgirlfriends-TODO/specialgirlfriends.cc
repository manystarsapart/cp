#include <bits/stdc++.h>
using namespace std;

// 1 <= N <= 2 * 10^5
// 1 <= T <= 10^18
// 1 <= Di <= 10^9

int main() {
    int N, T; cin >> N >> T;
    vector<int> Di = {};
    for (int i=0; i < N; i++) {
        int add; cin >> add;
        Di.push_back(add);
    }


    for (auto x : Di) {
        cout << x << " ";
    }
    // this only returns the list of Di for now
    // will solve later on
}