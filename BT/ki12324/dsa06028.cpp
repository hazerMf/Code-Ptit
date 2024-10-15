#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    stack<vector<int>> sav;
    for (int &i : a) cin >> i;
    for (int i = 0; i < n - 1; ++i) {
        int index = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[index]) 
                index = j;
        }
        swap(a[i], a[index]);
        vector<int> temp;
        for (int j = 0; j < n; ++j) {
            temp.push_back(a[j]);
        }
        sav.push(temp);
    }
    while(!sav.empty()){
        vector<int> temp = sav.top();
        sav.pop();
        cout << "Buoc " << sav.size()+1 << ": ";
        for(auto i:temp) cout << i << " ";
        cout << endl;
    }
    cout << endl;
}
