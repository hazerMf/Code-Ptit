#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m], dd[n + m - 1] = {};
        for (int &i : a) cin >> i;
        for (int &i : b) cin >> i;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                dd[i + j] += a[i] * b[j];
            }
        }
        for (int &i : dd) cout << i << " ";
        cout << endl;
    }
}