#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o

    int t; cin >> t;
    
    for (int i; i<t; i++) {
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int compensation = 0;
        if (x1 != x2 && y1 != y2) {
            compensation = 2;
        }
        cout << abs(x2 - x1) + abs(y2 - y1) + compensation << "\n"; 
    }
}