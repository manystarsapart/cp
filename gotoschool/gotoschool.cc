#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> v ;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(make_pair(x, i+1));
    }

    sort(v.begin(), v.end());
    // sorts based on first value of pair



    /*

    vector notes
    
    v = [1, 2, 3]
    for x in v:

    

   vector<int> v = {1, 2, 3};

   v.push_back(1); // 1 2 3 1
   v.pop_back(); // 1 2 3
   v.size(); // 3
   v.empty(); // false
   v.clear(); // 

    */
   



    for (auto x: v) {
        cout << x.second << " ";
    }
}



