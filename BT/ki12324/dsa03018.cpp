#include <bits/stdc++.h>
using namespace std;

void testCase() {
    
}

int main() {
    int runs; cin >> runs;
    while (runs--) {
        int n; cin >> n;
        int seven = n / 7;
        int four = n % 7;
        bool chk = true;
        while (four % 4 != 0 && seven > 0 && four <= 28) {
            four += 7;
            seven--;
        }
        if (four % 4 == 0) four /= 4;
        else {
            cout << -1;
            chk=false;
        }
        if(chk){
            while (four--) cout << 4;
            while (seven--) cout << 7;
        }
        cout << endl;
    }
}