#include <bits/stdc++.h> 
using namespace std;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    int N, L, T; cin >> N >> L >> T;

    vector<int> F = {};
    for (int i=0; i<N; i++) {
        int tmp; cin >> tmp;
        F.push_back(tmp);
    }

    // int currentGas = T;
    int travelled = 0;
    int output = 0; // no. of refills
    int lastRefilled = 0; // last refilled station from start

    while (travelled < L) {
        for (auto Fi : F) {
            if (T + lastRefilled < Fi) {
                output=-1;
                return -1;
            }
            else if (T + lastRefilled - Fi <= 0) {
                travelled += Fi;
                output++;
                lastRefilled = Fi;
            }
        }
    }

    cout << output;
}


