#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    long unsigned N, K; cin >> N >> K;
    vector<int> v = {};
    int output = 0;
    for (long unsigned i=0; i<N; i++) {
        int add; cin >> add;
        v.push_back(add);
    }

    for (long unsigned i=0; i<N; i++) {
        if (i-1 > v[i]) {

        }
    }

    // ONLY THE FIRST TURN MATTERS ===> K = 1
    // SET A GLOBAL COUNTER FOR TOTAL HEALTH STOLEN
    // ALSO A DEATH COUNT. SO COUNT DEAD MONSTERS RATHER THAN ALIVE


    cout << output;
}