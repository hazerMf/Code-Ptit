#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        string s; cin >> s;
        stack<int> st;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == ')' && !st.empty() && s[st.top()] == '(')
                st.pop();
            else if (s[i] == ']' && !st.empty() && s[st.top()] == '[')
                st.pop();
            else if (s[i] == '}' && !st.empty() && s[st.top()] == '{')
                st.pop();
            else
                st.push(i);
        }
        cout << (st.empty() ? "YES" : "NO") << endl;
    }
}