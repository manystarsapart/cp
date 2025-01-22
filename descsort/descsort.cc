#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> v = {};
    for (int i=0; i<n; i++) {
        int currentNumber; cin >> currentNumber;
        v.push_back(currentNumber);
    }
    sort(v.rbegin(), v.rend());
    for (int i : v) {
        cout << i << " ";
    }
}