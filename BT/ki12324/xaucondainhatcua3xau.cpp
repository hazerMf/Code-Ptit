#include <bits/stdc++.h>
using namespace std;

int f[1001][1001][1001];

void testCase() {
    string a, b , c;
    cin >> a >> b >> c;
    
    int res = 0;
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= a.length(); ++i) {
        for (int j = 1; j <= b.length(); ++j) {
            for(int k = 1; k <=c.length(); ++k){
                if (a[i - 1] == b[j - 1]&&a[i - 1] == c[k - 1])
                    f[i][j][k] = f[i - 1][j - 1][k - 1] + 1;
                else
                    f[i][j][k] = max(f[i - 1][j][k], f[i][j - 1][k], f[i][j][k - 1]);
                res = max(res, f[i][j][k]);
            }
        }
    }
    cout << res;
}

int main() {
    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}