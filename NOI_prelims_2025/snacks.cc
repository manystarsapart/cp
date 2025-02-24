#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); // fast i/o
    
    long long n, q; cin >> n >> q;
    vector<long long> a = {};
    vector<tuple<long long,long long,long long>> queries = {};
    // l[j], r[j], x[j]

    long long firstSum = 0;

    for (long long i=0; i < n; i++) {
        long long tmp; cin >> tmp;
        a.push_back(tmp);
        firstSum += tmp;
    }

    for (long long i=0; i < q; i++) {
        long long tmp1, tmp2, tmp3; cin >> tmp1 >> tmp2 >> tmp3;
        queries.push_back(make_tuple(tmp1,tmp2,tmp3));
    }

    cout << firstSum << "\n";

    long long sum = 0;
    for (long long j=0; j < q; j++) {
        // iterates through all queries. produces one sum each line
        
        for (long long i=0; i<n; i++) {
            if (get<0>(queries[j]) > a[i]) {} else {
                if (a[i] <= get<1>(queries[j]))
                // if eaten
                a[i] = get<2>(queries[j]);
                // cout << "eaten: " << a[i];
            }
            sum += a[i];
        }

        // DEBUG
        // for (auto x : a) {
        //     cout << x << " ";
        // }
        // cout << "\n";

        cout << sum << "\n";
        sum = 0;
    }
}

// SUBMISSION 1: 0/100
// SUBMISSION 2: 0/100
// SUBMISSION 3: 0/100
// SUBMISSION 4: 17/100: int --> long long
// SUBMISSION 5: 17/100  long long --> unsigned long long
// SUBMISSION 6: put one if before another