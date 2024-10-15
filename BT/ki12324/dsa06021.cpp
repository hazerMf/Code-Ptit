#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n, x, ans;
        cin >> n >> x;
        for (int i = 1; i <= n; ++i) {
            int num; cin >> num;
            if (num == x) ans = i;
        }
        cout << ans << endl;
    }
}