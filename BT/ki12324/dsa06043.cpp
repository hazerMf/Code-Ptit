#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs = 1; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        int list[n];
        for(auto &i:list) cin >> i;
        int prefixsum[n];
        for(int i=0;i<n;i++){
            if(i==0) prefixsum[i] = list[i];
            else{
                prefixsum[i] = prefixsum[i-1] + list[i];
            }
        }
        int res=-1;
        for(int i=0;i<n;i++){
            if(prefixsum[i]==prefixsum[n-1]-prefixsum[i-1]){
                res = i;
                break;
            }
        }
        if(res!=-1) cout << res+1 << endl;
        else cout << -1 << endl;
    }
}