#include <bits/stdc++.h> 
using namespace std;

int main() {
    int N; cin >> N;
    vector <pair<int,int>> v = {}; // first guy is settled
    for (int i=1; i<N; i++) {
        int Ai; cin >> Ai;
        v.push_back(make_pair(i, Ai));
        // from second onwards
    } 

// sample 

// Ai: 1 1 2 2
// I:  2 3 4 5

// v = {
// (1, 0),
// (2, 1), <--- starting
// (3, 1),
// (4, 2),
// (5, 2)
// }

    vector<int> count = {};
        // (no. of subordinates)

    for (int i=0; i<N; i++) {
        count.push_back(0);
    }

    for (auto x : v) {
        if (x.second != 0) {
            count[x.second - 1] += 1;
        }
    }
    // increment x.second indexed member each time someone has them as their boss

    for (auto x : count) {cout << x << "\n";}


}
