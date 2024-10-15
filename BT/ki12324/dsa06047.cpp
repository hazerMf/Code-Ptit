#include <bits/stdc++.h>
using namespace std;


int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        vector<long long> a(n);
        for (auto &i : a) cin >> i;
        sort(a.begin(), a.end());
        bool chk = false;
        for (int i = 0; i < n; ++i) {
            if(chk) break;
            for (int j = i + 1; j < n; ++j) {
                long long C = pow(a[i], 2) + pow(a[j], 2);
                long long c = sqrt(C);
                if (c * c == C && binary_search(a.begin() + j + 1, a.end(), c)) {
                    chk = true;
                    break;
                }
            }
        }
        if(chk) cout << "YES" << endl;
        else cout <<"NO"<<endl;
    }
}