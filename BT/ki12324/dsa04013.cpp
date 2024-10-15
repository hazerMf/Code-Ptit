#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &i : a) {
            cin >> i;
        }
        sort(a.begin(), a.end());
        int ans = n, l = n / 2 - 1, r = n - 1;
        while (l >= 0) {
            if (a[r] >= a[l] * 2) {
                ans--;
                l--; r--;
            }
            else l--;
        }
        cout << ans << endl;
    }
}