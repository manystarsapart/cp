#include <bits/stdc++.h> 
using namespace std;

int returnVal(char x) {
    return (int)x - 97;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o

    int L, t; cin >> L >> t;
    int output = 0;

    for (int i=1; i<t; i++) {
        if (L != 1) {
            if (L % 2 != 0) {
                // if L is odd
                L = 3*L + 1;
                // cout << L << " ";
                output = L;
            } else {
                L /= 2;
                // cout << L << " ";
                output = L;
            }
        }
        else {
            output = -1;
            // cout << "done";
        }

        ;
    }

    cout << output;


}