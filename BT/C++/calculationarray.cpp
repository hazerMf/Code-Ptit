#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int prod = 1;
        int g;
        cin >> g;
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
            prod = (prod * x) % MOD;
            g = gcd(g, x);
        }

        int gn = pow(g, n) % MOD;

        int res = (prod * gn) % MOD;
        cout << res << "\n";
    }

    return 0;
}