#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long c, d;
    cin >> n >> c >> d;
    vector<long long> a(n * n);
    for (int i = 0; i < n * n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<long long> b(n * n);
    b[0] = a[0];
    for (int i = 1; i < n; ++i) {
        b[i] = b[i - 1] + c;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            b[i * n + j] = b[(i - 1) * n + j] + d;
        }
    }
    sort(b.begin(),b.end());
    cout << (a == b ? "YEs" : "nO") << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}