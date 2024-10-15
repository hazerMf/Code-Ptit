#include<bits/stdc++.h>
using namespace std;

void sol(vector<vector<int>>& map, int x, int y, int a, int b, int step, vector<int>& ans, int& rec) {
    if (step < rec && x == a - 1 && y == b - 1) {
        rec = step;
        return;
    }
    if(step>rec) return;
    if (x >= a || y >= b) return;
    if (x + map[x][y] < a) sol(map, x + map[x][y], y, a, b, step + 1, ans, rec);
    if (y + map[x][y] < b) sol(map, x, y + map[x][y], a, b, step + 1, ans, rec);
}

int main() {
    int runs;
    cin >> runs;
    while (runs--) {
        int rec = 999999;
        int a, b;
        cin >> a >> b;
        vector<vector<int>> map(a, vector<int>(b));
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                cin >> map[i][j];
            }
        }
        vector<int> ans;
        sol(map, 0, 0, a, b, 0, ans, rec);
        if (rec != 999999) {
            cout << rec << endl;
        } else {
            cout << -1 << endl;
        }
    }
}