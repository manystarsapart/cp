#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    
    int n; cin >> n;
    long long d; cin >> d;
    deque<tuple<long long, long long, long long>> a = {};
    // ducks needed, initial id, sorted id
    long long moves = 0;

    for (int i=0; i<n; i++) {
        long long tmp; cin >> tmp;
        a.push_back(make_tuple(tmp, i, 0));
    }

    sort(a.rbegin(), a.rend());
    for (int i=0; i<n; i++) {
        get<2>(a[i]) = i;
    }

    // now: descending order
    int prev = 0;
    while (a.size() > 1) {
        for (unsigned int i=1; i<a.size(); i++) {
            if (get<1>(a[i]) <= get<1>(a[0])) {
                // this makes all cells with lower index than the current largest element into the largest element (for removing repeated values later)
                a[i] = a[0];
            }
        }
        moves += get<0>(a[0]) * (get<1>(a[0]) - prev);
        prev = get<1>(a[0]);

        // this removes all cells to the left of the current greatest element
        a.erase(unique(a.begin(),a.end()),a.end());


        a.pop_front();    
        cout << "a[0].first is " << get<0>(a[0]) << "\n";
for (auto x : a) {
    cout << get<0>(x) << " " << get<1>(x) << "\n";
} 
    }

if (a.size() == 1) {
    moves += get<0>(a[0]);
}

// cout << "a[0].first is " << a[0].first << "\n";
// for (auto x : a) {
//     cout << x.first << " " << x.second << "\n";
// } 


    
    cout << moves;
}



// SUBMISSION 1: 24/100
// SUBMISSION 2: a.size() > 0 --> a.size() = 1

