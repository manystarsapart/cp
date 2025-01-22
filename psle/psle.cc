#include <bits/stdc++.h>
using namespace std;

int main() {
    int s; cin >> s;
    pair<string, int> arr[7] = {
        {"A*", 91},
        {"A", 75},
        {"B", 60},
        {"C", 50},
        {"D", 35},
        {"E", 20},
        {"U", 0}
    };

    for (auto &pair : arr) {
        if (s >= pair.second) {
            cout << pair.first;
            break;
        } 
    }
}

