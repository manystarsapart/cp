#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    long long Q; cin >> Q;
    deque<unsigned long long> line = {};
    vector<unsigned long long> parallelogram = {}; 
    for (long long i=0; i<Q; i++) {
        int query; cin >> query;
        if (query == 1) {
            unsigned long long area; cin >> area;
            line.push_back(area);
        } else if (query == 2) {
            line.pop_back();
        } else if (query == 3) {
            parallelogram.push_back(line[0]);
            line.pop_front();
        } else break;
    }
    for (auto x : parallelogram) {
        cout << x << "\n";
    }
}