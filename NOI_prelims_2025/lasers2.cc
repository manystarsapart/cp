#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    
    int h, w, k; cin >> h >> w >> k;
    vector<tuple<int,int,int,int>> walls = {};
    // left bound, right bound, length, cost

    vector<tuple<int,int,int,int>> cantAfford= {};

    int maxUnblocked = 0;


    for (int i=0; i < h; i++) {
        int tmp1, tmp2, tmp3; cin >> tmp1 >> tmp2 >> tmp3;
        int len = tmp2 - tmp1 + 1;
        walls.push_back(make_tuple(tmp1,tmp2,len,tmp3));
    }
    
    for (int i=0; i<h; i++) {
        if (get<3>(walls[i]) > k) { }
    }



}
