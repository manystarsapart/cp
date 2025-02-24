#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    
    int n, m; cin >> n >> m;

    vector<pair<int,int>> roads = {};
    vector<int> events = {};

    for (int i=0; i<n-1; i++) {
        int tmp1, tmp2; cin >> tmp1 >> tmp2;
        roads.push_back(make_pair(tmp1,tmp2));
    }

    for (int i=0; i<n-1; i++) {
        int tmp; cin >> tmp;
        events.push_back(tmp);
    }

    




}
