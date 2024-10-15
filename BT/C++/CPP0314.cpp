#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string line;
    cin.ignore();
    unordered_set<string> uniqueLines;
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        uniqueLines.insert(line);
    }
    int res = uniqueLines.size();
    cout << res;
}