#include <bits/stdc++.h>
using namespace std;

string maxx(int n, int s) {
    string res(n, '0');
    for (int i = 0; i < n; ++i) {
        res[i] += min(s, 9);
        s -= min(s, 9);
        if (s == 0) break;
    }
    return res;
}

string minn(int n, int s) {
    string res(n, '0');
    res[0] = '1'; s--;
    for (int i = n - 1; i >= 0; --i) {
        res[i] += min(s, 9);
        s -= min(s, 9);
        if (s == 0) break;
    }
    return res;
}

int main() {
    int n, s;
    cin >> n >> s;
    if (s <= 0 || s > 9 * n) {
        cout << "-1 -1";
    }else cout << minn(n, s) << " " << maxx(n, s) << endl;
}