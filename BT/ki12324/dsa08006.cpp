#include <bits/stdc++.h>
using namespace std;

bool check(string s, int n) {
    int x = 0;
    for (int i = 0; i < s.length(); ++i) {
        x = (x * 10 + (s[i] - '0')) % n;
    }
    return x == 0;
}

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        queue<string> q;
        q.push("9");
        while (!q.empty()) {
            string s = q.front();
            q.pop();
            if (check(s, n)) {
                cout << s;
                break;
            }
            q.push(s + "0");
            q.push(s + "9");
        }
        cout << endl;
    }
}