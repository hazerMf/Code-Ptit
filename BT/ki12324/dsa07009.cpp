#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs; cin >> runs;
    while (runs--) {
        string s; cin >> s;
        stack<string> st;
        for (int i = s.length() - 1; i >= 0; --i) {
            string tmp = string(1, s[i]);
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
                string x = st.top(); st.pop();
                string y = st.top(); st.pop();
                string z = "(" + x + tmp + y + ")";
                st.push(z);
            }
            else st.push(tmp);d
        }
        cout << st.top() << endl;
    }
}