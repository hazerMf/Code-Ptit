#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int k; string s;
        cin >> k >> s;
        for (int i = 0; i < s.length(); ++i) {
            if (k == 0) break;
            char c = '0';
            for (int j = i + 1; j < s.length(); ++j) {
                c = max(c, s[j]);
            }
            if (c <= s[i]) continue;
            string newz = s;
            for (int j = i + 1; j < s.length(); ++j) {
                if (s[j] == c) {
                    string temp = s;
                    swap(temp[i], temp[j]);
                    newz = max(newz, temp);
                }
            }
            s = newz;
            k--;
        }
        cout << s << endl;
    }
}