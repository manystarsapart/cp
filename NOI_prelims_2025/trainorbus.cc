#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    

    int n; cin >> n;
    vector<int> trainTiming = {};
    // vector<int> resTiming = {};
    int output = 0;

    for (int i=0; i<n; i++) {
        // train
        int tmp; cin >> tmp;
        trainTiming.push_back(tmp);
    }

    for (int i=0; i<n; i++) {
        // bus
        int tmp; cin >> tmp;
        output += min(trainTiming[i], tmp);
    }
    cout << output;
}


// SUBMISSION 1: 100/100