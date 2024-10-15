#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for (int i = 0; i < n; ++i) {
            long long x; cin >> x;
            q.push(x);
        }
        long long ans = 0;
        while (q.size() >= 2) {
            long long x = q.top(); q.pop();
            long long y = q.top(); q.pop();
            long long z = (x + y) % mod;
            ans = (ans + z) % mod;
            q.push(z);
        }
        cout << ans << endl;
    }
}