#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int d; 
        cin >> d;
        string s; 
        cin >> s;
        int dd[127] = {};
        int maxx = 0;
        for (char i : s) {
            dd[i]++;
            maxx = max(maxx, dd[i]);
        }
        if (maxx <= ceil((float)s.length() / d)) cout << 1;
        else cout << -1;
        cout << endl;
    }
}