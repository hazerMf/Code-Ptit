#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; 
    cin >> runs;
    while (runs--) {
        int n, s, m;
        cin >> n >> s >> m;
        if (n < m || 6 * (n - m) < m)
            cout << -1;
        else cout << ceil((float) m * s / n);
        cout << endl;
    }
}