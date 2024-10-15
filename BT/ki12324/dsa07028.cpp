#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        stack<int> st;
        for (int i = 1; i <= n; ++i) {
            while (!st.empty() && a[st.top()] <= a[i]) {
                st.pop();
            }
            if (st.empty()) cout << i << " ";
            else cout << i - st.top() << " ";
            st.push(i);
        }
        cout << endl;
    }
}