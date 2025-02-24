#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    
    int n; cin >> n;
    long long d; cin >> d;
    vector<pair<long long, long long>> a = {};
    long long moves = 0;

    for (int i=0; i<n; i++) {
        long long tmp; cin >> tmp;
        a.push_back(make_pair(tmp, i));
    }

    sort(a.begin(), a.end());

    // now: ascending order
while (a.size() > 1) {
    int finalid = a.size()-1;
    for (unsigned int i=finalid-1; i>=0; i--) { // starts from biggest
        if (a[i].second <= a[finalid].second) {
            a[i] = a[finalid];
        }
    }
    moves += a[finalid].first * a[finalid].second;
    a.erase(unique(a.begin(),a.end()),a.end());
    a.pop_back();
    
    
    // cout << a[0].first << " " << a[0].second << "\n";
    // for (auto x : a) {
    //     cout << x.first << " " << x.second << "\n";
    // } 
    // cout << "\n";
    
    for (auto x : a) {
        cout << x.first << " " << x.second << "\n";
    } 
    
}

// moves += a[0].first;

    // for (auto x : a) {
    //     cout << x.first << " " << x.second << "\n";
    // } 
    
    cout << moves;
}


