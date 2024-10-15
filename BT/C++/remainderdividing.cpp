#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string s;
        long long n;
        cin >> s >> n;
        long long res =0;
        for(int i=0;i<s.size();i++){
            res = res*10 +s[i]-'0';
            res%=n;;
        }
        cout << res << endl;
    }
}