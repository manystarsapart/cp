#include <bits/stdc++.h>
using namespace std;

// 3 <= n <= 1000
// 1 <= a1, a2, b1, b2, c1, c2 <= n 
// location: (row, column)


int main() {
    int n, a1, a2, b1, b2, c1, c2;
    cin >> n;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cin >> c1 >> c2;

    // pair<int,int> kai = make_pair(a1,a2);
    // pair<int,int> pav = make_pair(b1,b2);
    // pair<int,int> dest = make_pair(c1,c2);

    bool happyrow = false;
    bool happycol = false;


// TODO: DEAL WITH C1 = B1 TESTCASE



    if (c1 > b1) {
        // pav --> dest
        if (b1 > a1) {
            // kai -X- pav --> dest
            happycol = true;
        } else {
            // pav ----- kai (pav and kai are some apart. find dest)
            if (a1 > c1) {
                // pav --> dest -X- kai
                happycol = true;
            }
        }
    } else {
        // dest <-- pav
        if (a1 > b1) {
            // dest <-- pav -X- kai
            happycol = true;
        } else {
            // kai ----- pav (dest unknown)
            if (c1 > a1) {
                // kai -X- dest <-- pav
                happycol = true;
            }
        }
    }

    if (c2 > b2) {
        // pav --> dest
        if (b2 > a2) {
            // kai above pav --> dest
            happyrow = true;
        } else {
            // pav ----- kai (pav and kai are some apart. find dest)
            if (a2 > c2) {
                // pav --> dest -X- kai
                happyrow = true;
            }
        }
    } else {
        // dest <-- pav
        if (a2 > b2) {
            // dest <-- pav -X- kai
            happyrow = true;
        } else {
            // kai ----- pav (dest unknown)
            if (c2 > a2) {
                // kai -X- dest <-- pav
                happyrow = true;
            }
        }
    }


    if (happyrow == true && happycol == true) {
        cout << "YES";
    } else cout << "NO";
}