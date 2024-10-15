#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long poww(long long n, long long k) {
    if (k == 0) return 1;
    long long x = poww(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

long long dao(long long n) {
    long long res = 0;
    while (n > 0) {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main() {
    int runs; cin >> runs;
    while (runs--) {
        long long n; cin >> n;
        long long r = dao(n);
        cout << poww(n, r) << endl;
    }
}