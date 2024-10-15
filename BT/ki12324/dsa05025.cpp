#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while(runs--) {
        int n; cin >> n;
        vector<long long> f(n + 1, 0);
        long long tmp = 0;
        for (int i = 1; i <= min(3, n); ++i) {
            f[i] = tmp + 1;
            tmp += f[i];
        }
        for (int i = 4; i <= n; ++i) {
            for (int j = 1; j <= 3; ++j) {
                f[i] += f[i - j];
            }
        }
        cout << f[n] << endl;
    }
}