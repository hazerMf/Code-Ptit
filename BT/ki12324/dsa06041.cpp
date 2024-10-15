#include <bits/stdc++.h>
using namespace std;

void func() {
    int n; cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        m[x]++;
    }
    for (auto i : m) {
        if (i.second > n / 2) {
            cout << i.first;
            return;
        }
    }
    cout << "NO";
}

int main() {
    int runs; cin >> runs;
    while (runs--) {
        func();
        cout << endl;
    }
}