#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin >> N;
    deque<int> A = {};
    for (int i=0; i<N; i++) {
        int tmp; cin >> tmp;
        while (A.size() >= 1) {
            if (!A.empty() && tmp >= A[0]) {
                A.pop_front();  
                } else break; 
            }

        A.push_front(tmp);
    }
    
    for (auto x : A) {
        cout << x << "\n";
    }
}



