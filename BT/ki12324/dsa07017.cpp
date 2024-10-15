#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        int a[n + 1], gr[n + 1], le[n + 1];
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        stack<int> st;
        for (int i = n; i >= 1; --i) {
            while (!st.empty() && a[st.top()] <= a[i]) {
                st.pop();
            }
            if (st.empty()) gr[i] = -1;
            else gr[i] = st.top();
            st.push(i);
        }
        while (!st.empty()) st.pop();
        for (int i = n; i >= 1; --i) {
            while (!st.empty() && st.top() >= a[i]) {
                st.pop();
            }
            if (st.empty()) le[i] = -1;
            else le[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 1; i <= n; ++i) {
            if (gr[i] == -1) cout << -1;
            else cout << le[gr[i]];
            cout << " ";
        }
        cout << endl;
    }
}