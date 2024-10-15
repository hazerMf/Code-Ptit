#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        pair<int, int> ans(-1, 1e6);
        map<int, int> mp;
        for (int i = 1; i <= n; ++i) {
            int x; cin >> x;
            if (mp.find(x) != mp.end()) {
                if (mp[x] < ans.second) {
                    ans = {x, mp[x]};
                }
            }
            else mp[x] = i;
        }
        if (ans.second == 1e6) cout << "NO" << endl;
        else cout << ans.first << endl;
    }
}