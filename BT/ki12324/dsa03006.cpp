#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n;
    cin >> n;
    int a[100];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i]!=i&&a[i]!=n-i+1) {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main() {
    int runs;
    cin >> runs;
    while(runs--){
        testCase();
        cout << endl;
    }
}