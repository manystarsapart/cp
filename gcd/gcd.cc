#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
    
}

int main() {
    int a;
    int b;
    cin >> a >> b;
    
    if (a > b) {
        cout << gcd(a,b);
    } else {
        cout << gcd(b,a);
    }


}

