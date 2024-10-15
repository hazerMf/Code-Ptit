#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        string a, b;
        cin >> a >> b;
        long long x = 0, y = 0;
        for (int i = 0; i < a.length(); ++i) {
            x = x * 2 + (a[i] - '0');
        }
        for (int i = 0; i < b.length(); ++i) {
            y = y * 2 + (b[i] - '0');
        }
        cout << x * y << endl;
    }
}