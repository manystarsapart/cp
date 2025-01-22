#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long N, A, B;
    cin >> N >> A >> B;

    string fizz = "Fizz";
    string buzz = "Buzz";
    string fizzbuzz = "FizzBuzz";
    string output = "";

    for (unsigned long long i = 1; i <= N; ++i) {
        if (i % (A * B) == 0) {
            output += fizzbuzz;
        } else if (i % A == 0) {
            output += fizz;
        } else if (i % B == 0) {
            output += buzz;
        } else {
            output += to_string(i);
        }
        output += "\n";
    }
    cout << output;
}
