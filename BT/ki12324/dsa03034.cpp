#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs = 1; cin >> runs;
    while (runs--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m), c(k);
        for (int &i : a) cin >> i;
        for (int &i : b) cin >> i;
        for (int &i : c) cin >> i;
        int i = 0, j = 0, h = 0, ok = 0;
        while (i < n && j < m && h < k) {
            if (a[i] == b[j] && a[i] == c[h]) {
                cout << a[i] << " ";
                i++, j++, h++, ok = 1;
                continue;
            }
            if (a[i] < b[j]) i++;
            else if (b[j] < c[h]) j++;
            else h++;
        }
        if (!ok) cout << "NO";
        cout << endl;
    }
}