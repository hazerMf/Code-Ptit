#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        string s; cin >> s;
        string ans(1, s[0]);
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != s[i - 1])
                ans.push_back('1');
            else
                ans.push_back('0');
        }
        cout << ans << endl;
    }
}