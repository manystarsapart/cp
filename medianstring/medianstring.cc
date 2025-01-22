#include <bits/stdc++.h>
using namespace std;

// 0 <= N <= 1000

int main() {
    int N; cin >> N;
    vector<int> v = {};
    for (int i=0; i<N; i++) {
        int add; cin >> add;
        v.push_back(add);
    }

    int medianIndex = v.size() / 2;
    cout << v[medianIndex];
}


// i thought i needed to sort this before finding the actual median among the values given LOL
