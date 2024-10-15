#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; 
    cin >> runs;
    while (runs--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int ans = -1;
        for (int i = 0; i < n - 1; ++i) {
            int x; 
            cin >> x;
            if (x != a[i] && ans == -1) {
                ans = i + 1;
            }
        }
        cout << ans;
        cout << endl;
    }
}