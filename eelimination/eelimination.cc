#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin >> N;
    vector<int> H(N);
    for (int i = 0; i < N; ++i) cin >> H[i];
    vector<int> result(N);
    stack<pair<int,int>> stack; 
    // <Hi, index>

    for (int i=N-1; i>=0; i--) {

        while (!stack.empty() && stack.top().first <= H[i]) {
            stack.pop();
        }
        
        if (!stack.empty()) {
            result[i] = stack.top().second;
        }

        stack.push(make_pair(H[i],i+1));

    }

    for (auto x : result) {
        cout << x << " ";
    }











}