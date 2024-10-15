#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        queue<string> q;
        q.push("1");
        while (n--) {
            string s = q.front();
            q.pop();
            cout << s << " ";
            q.push(s + "0");
            q.push(s + "1");
        }
        cout << endl;
    }
}