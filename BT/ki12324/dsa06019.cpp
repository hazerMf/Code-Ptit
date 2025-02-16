#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> a(mp.begin(), mp.end());
        sort(a.begin(), a.end(), cmp);
        for (auto i : a) {
            for (int j = 1; j <= i.second; ++j) {
                cout << i.first << " ";
            }
        }
        cout << endl;
    }
}