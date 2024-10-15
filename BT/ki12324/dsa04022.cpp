#include <bits/stdc++.h>
using namespace std;

vector<int> f(30);
void prepare() {
    f[1] = 1;
    for (int i = 2; i < 30; ++i) {
        f[i] = f[i - 1] * 2;
    }
}

int main() {
    prepare();
    int runs ; cin >> runs;
    while (runs--) {
        int n, k;
        cin >> n >> k;
        for (int i = n; i >= 1; --i) {
            if (k > f[i]) k -= f[i];
            else if (k == f[i]) {
                cout << char(i - 1 + 'A');
                break;
            }
        }
        cout << endl;
    }
}