#include <bits/stdc++.h>
using namespace std;

bool compareStringNumbers(string a, string b) {
    if (a.size() != b.size()) {return a.length() < b.length();} 
    else {return a < b;}
}

int main() {
    int N; cin >> N;
    vector<string> v = {};
    for (int i=0; i<N; i++) {
        string add; cin >> add;
        v.push_back(add);
    }

    sort(v.begin(),v.end(),compareStringNumbers);

    for (auto x : v) {
        cout << x << " ";
    }
}