#include <bits/stdc++.h>

using namespace std;

void output(int n, int m, int x[101][101]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[101][101], b[101][101];
        memset(b, 0, sizeof(b));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    for (int k = 0; k < m; k++) {
                        b[i][k] = 1;
                    }
                    for (int k = 0; k < n; k++) {
                        b[k][j] = 1;
                    }
                }
            }
        }
        output(n, m, b);
    }
}