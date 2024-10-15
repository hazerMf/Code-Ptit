#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int v, e, x, y;
        cin >> v >> e;
        vector<vector<int>> g(v + 1);
        while (e--) {
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for (int i = 1; i <= v; ++i) {
            cout << i << ": ";
            for (int j : g[i]) cout << j << " ";
            cout << endl;
        }
        cout << endl;
    }
}