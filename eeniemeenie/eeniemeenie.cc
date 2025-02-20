#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    long long N, K; cin >> N >> K;
    vector<string> v = {};
    for (long long i=0; i<N; i++) {
        string add; cin >> add;
        v.push_back(add);
    }
    // v.push_back(v[0]); // adds first to last

    cout << v[K % N];
}