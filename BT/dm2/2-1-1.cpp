#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n; cin.ignore();
    int a[n + 1][n + 1] = {};
    for (int i = 1; i <= n; ++i) {
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    cout << "Danh sach canh" << endl;
    for (int i = 1; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (a[i][j] == 1) {
                cout << i << " " << j << endl;
            }
        }
    }
    cout << "Danh sach ke" << endl;
    for(int i=1;i<=n;i++){
        cout << i << ": ";
        for(int j=1;j<=n;j++){
            if(a[i][j]!=0){
                cout << j << " ";
            }
        }
        cout << endl;
    }
}