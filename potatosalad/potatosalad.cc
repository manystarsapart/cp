#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    int N; int D; cin >> N >> D;
    int output = 0;
    vector<int> v = {};
    for (int i=0; i<N; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(),v.end(),greater<int>());
    for (int i=0; i<D; i++) {
        output += v[i];
    }
    cout << output;
}
