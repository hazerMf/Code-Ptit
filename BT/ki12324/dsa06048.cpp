#include <bits/stdc++.h>
using namespace std;


int main() {
    int runs = 1; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (auto &i : a) cin >> i;
        int ans = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i] < a[i - 1]) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}