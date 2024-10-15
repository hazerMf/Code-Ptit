#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        string s; cin >> s;
        stack<char> st;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ')' && !st.empty() && st.top() == '(') {
                st.pop();
            }
            else st.push(s[i]);
        }
        cout << s.length() - st.size() << endl;
        }
}