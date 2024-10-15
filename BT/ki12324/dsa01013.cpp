#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        string s; cin >> s;
        string res = "";
        res.push_back(s[0]);
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != res.back())
                res.push_back('1');
            else
                res.push_back('0');
        }
        cout << res << endl;
    }
}