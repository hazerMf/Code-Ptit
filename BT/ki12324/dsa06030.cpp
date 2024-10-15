#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while(runs--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<vector<int>> b;
        for (int &i : a) cin >> i;
        for (int i = 1; i < n; ++i) {
            bool is_sorted = true;
            for (int j = 0; j < n - i; ++j) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    is_sorted = false;
                }
            }
            if (is_sorted) break;
            b.push_back(a);
        }
        for (int i = b.size() - 1; i >= 0; --i) {
            cout << "Buoc " + to_string(i + 1) + ": ";
            for (int j = 0; j < n; ++j) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}