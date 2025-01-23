#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N, A, B;
    cin >> N >> A >> B;

    for (unsigned long long i = 1; i <= N; ++i) {
        if (i % A == 0 && i % B == 0) {
            cout << "FizzBuzz\n";
        } else if (i % A == 0) {
            cout << "Fizz\n";
        } else if (i % B == 0) {
            cout << "Buzz\n";
        } else {
            cout << i << "\n";
        }
    }
}
