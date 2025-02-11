// 小六壬

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int current = 1;
    vector<int> v = {};
    // string list = "123456789";
    // string list = "震巽离兑坎中坤艮乾";
    // ^^does not show in terminal
    // vector<string> list = {"震", "巽", "离", "兑", "坎", "中", "坤", "艮", "乾"};
    vector<string> list = {
        "1 vf - da an - mu", 
        "2 xy - lq lm - mu", 
        "3 li - su xi - ho", 
        "4 dv - ii kz - jb", 
        "5 kj - xn ji - uv", 
        "6 vs - ks wh - tu", 
        "7 ky - bk fu - tu", 
        "8 gf - tc hx - tu", 
        "9 qm - tm de - jb"
        };
    // xn he ul pb
    for (int i=0; i<3; i++) {
        int x; cin >> x;
        current += (x-1);
        while (current > 9) current -= 9;
        v.push_back(current);
    }
    for (auto x : v) {
        cout << list[x-1] << '\n';
    }
}



