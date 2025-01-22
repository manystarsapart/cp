#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; // total boxes
    int m; // total schools
    cin >> N >> m;
    int final = 0;
    for (int i = 0; i < m; i++) {
        int ki;
        cin >> ki;
        if (N - ki > 0) {
            // incomplete. subtract & move on
            N -= ki;
            final ++;
        } else if (N - ki == 0) {
            // complete. return current number
            final ++;
        } 
    }
    cout << final;


}



