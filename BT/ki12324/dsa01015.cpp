#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        queue<string> q;
        q.push("9");
        while (true) {
            string s = q.front();
            q.pop();
            int x = 0;
            for (char i : s) {
                x = x * 10 + (i - '0');
                x %= n;
            }
            if (x == 0) {
                cout << s << endl;
                break;;
            }
            q.push(s + '0');
            q.push(s + '9');
        }
        cout << endl;
    }
}