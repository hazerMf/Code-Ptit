#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string s;int len;
        cin >> s;
        len = s.length();
        while(len--&&s[len]=='1') s[len] = '0';
        if(len>=0) s[len] = '1';
        cout << s << endl;
    }
}