#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        long long p, q;
        cin >> p >> q;
        while (1) {
            if (q % p == 0) {
                cout << "1/" << q / p;
                break;
            }
            long long x = q / p + 1;
            cout << "1/" << x << " + ";
            p = p * x - q;
            q *= x;
        }
        cout << endl;
    }
}