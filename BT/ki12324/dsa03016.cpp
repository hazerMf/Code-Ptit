#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int s, d;
        cin >> s >> d;
        if (s > 9 * d) {
            cout << -1;
        }else{
            int a[d] = {1}; s--;
            for (int i = d - 1; i >= 0; --i) {
                int x = min(s, 9 - a[i]);
                a[i] += x;
                s -= x;
            }
            for (int i = 0; i < d; ++i) {
                cout << a[i];
            }
        }
        cout << endl;
    }
}