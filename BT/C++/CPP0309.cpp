#include <bits/stdc++.h>
using namespace std;

int main() {
    int runs;
    cin >> runs;
    cin.ignore();
    while (runs--) {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string temp;
        int ct=0;
        while(ss >> temp){
            ct++;
        }
        cout << ct << endl;
    }
    return 0;
}