#include <bits/stdc++.h>
using namespace std;
int matrix[10000][10000];
void cr(){
    for(int i=0;i<10000;i++){
        for(int j=0;j<10000;j++){
            matrix[i][j]=0;
        }
    }
}
int main() {
    cr();
    int v, e, x, y;
    cin >> v >> e;
    vector<vector<int>> g(v + 1);
    while (e--) {
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
        matrix[x-1][y-1]=1;
        matrix[y-1][x-1]=1;
    }
    cout << "Danh sach ke" << endl;
    for (int i = 1; i <= v; ++i) {
        cout << i << ": ";
        for (int j : g[i]) cout << j << " ";
        cout << endl;
    }
    cout << "Ma tran ke" << endl;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}