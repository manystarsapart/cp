#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    int N; int S; cin >> N >> S;
    int output = 0;
    list<int> zeroIndices = {};
    for (int i=0; i<N; i++) {
        int tmp; cin >> tmp;
        if (tmp == 0) {
            zeroIndices.push_back(i);
        }

    }




    cout << output;
}



