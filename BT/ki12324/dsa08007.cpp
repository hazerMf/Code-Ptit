#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        string s; cin >> s;
        int res = 0;
        queue<string> q;
        q.push("1");
        while (!q.empty()) {
            string z = q.front();
            q.pop();
            res++;
            string x = z + "0";
            if (x.length() > s.length() || (x.length() == s.length() && x > s))
                break;
            q.push(x);

            x = z + "1";
            if (x.length() > s.length() || (x.length() == s.length() && x > s))
                break;
            q.push(x);
        }
        cout << res + q.size() << endl;
    }
}