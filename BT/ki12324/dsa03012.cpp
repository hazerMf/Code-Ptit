#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    cin.ignore();
    while(runs--){
        string s;
        cin >> s;
        int a[300]={0};
        for(int i=0;i<s.length();i++) a[s[i]]++;
        int maxchar=0;
        for(int i=0;i<300;i++){
            maxchar = max(maxchar,a[i]);
        }
        if(maxchar<=(s.length()+1)/2) cout << 1 << endl;
        else cout << -1 <<endl;
    }
}