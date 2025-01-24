// GENERAL

#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o


}


// DEALING WITH VECTORS

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> v = {};
    for (int i=0; i<N; i++) {
        int add; cin >> add;
        v.push_back(add);
    }

    for (auto x : v) {
        cout << x << " ";
    }
}



