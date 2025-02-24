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
    long long diff = 0;
    long long prevSum = firstSum;

    for (long long j=0; j<q; j++) {
        // each query
        sort(a.begin(), a.end());
        

        auto lb = lower_bound(a.begin(), a.end(), get<0>(queries[j]));
        int lowerBoundIndex = lb - a.begin();
        // ^returns index of first element within param
        auto ub = upper_bound(a.begin(), a.end(), get<1>(queries[j]));
        int upperBoundIndex = ub - a.begin();
        // ^returns index of first element above upper param
        for (int i=lowerBoundIndex; i<upperBoundIndex; i++) {
            diff += get<2>(queries[j]) - a[i];
            a[i] = get<2>(queries[j]);
        }
        long long sum = prevSum + diff;
        cout << sum << "\n";
        diff = 0;
        prevSum = sum;

        // DEBUG
        // for (auto x : a) {
        //     cout << x << " ";
        // }
        // cout << "\n";
    }

}

// SUBMISSION 1: 0/100
// SUBMISSION 2: 0/100
// SUBMISSION 3: 0/100
// SUBMISSION 4: 17/100: int --> long long
// SUBMISSION 5: 17/100: long long --> unsigned long long
// SUBMISSION 6: 17/100: put one if before another
// SUBMISSION 7: 17/100: used upper bound & lower bound to replace a[i] with x[j]


