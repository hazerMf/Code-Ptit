#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs = 1; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        int a[n], f[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            f[i] = 1;
            for (int j = 0; j < i; ++j) {
                if (a[i] >= a[j]) {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
        }
        cout << n - *max_element(f, f + n);
        cout << endl;
    }
}