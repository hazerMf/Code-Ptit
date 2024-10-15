#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &i : a) cin >> i;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int k = i;
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[k]) k = j;
            }
            if (k != i) {
                ans++;
                swap(a[i], a[k]);
            }
        }
        cout << ans << endl;
    }
}