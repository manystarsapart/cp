#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int N; cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; ++i) cin >> arr[i];
    
    vector<int> res(N, 0);
    stack<int> stk; // Stores indices of elements
    
    for (int i = N-1; i >= 0; --i) {
        // Pop elements smaller than current
        while (!stk.empty() && arr[stk.top()] <= arr[i]) {
            stk.pop();
        }
        
        // If stack not empty, next greater is at stk.top()
        if (!stk.empty()) {
            res[i] = stk.top() - i - 1; // Elements between i and stk.top()
        } else {
            res[i] = 0; // No greater element
        }
        
        stk.push(i); // Push current index
    }
    
    for (int x : res) cout << x << " ";
    return 0;
}