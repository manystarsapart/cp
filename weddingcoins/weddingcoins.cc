#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    long long N; cin >> N;
    long long output = 0;
    vector<int> deno = {
        1000000,
        500000,
        100000,
        50000,
        10000,
        5000,
        1000,
        500,
        100,
        50,
        10,
        5,
        1
    };

    for (auto x : deno) {
        if (N <= 0) break;
        output += N / x; // add quotient to output
        N %= x; // N = remainder
    }
    cout << output;
}


