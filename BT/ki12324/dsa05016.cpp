#include <bits/stdc++.h>
using namespace std;

long long f[10001];

void prepare() {
    int i2 = 1, i3 = 1, i5 = 1;
    f[1] = 1;
    for (int i = 2; i <= 1e4; ++i) {
        f[i] = min({f[i2] * 2, f[i3] * 3, f[i5] * 5});
        if (f[i] == f[i2] * 2) i2++;
        if (f[i] == f[i3] * 3) i3++;
        if (f[i] == f[i5] * 5) i5++;
    }
}

int main() {
    prepare();
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        cout << f[n] << endl;;
    }
}