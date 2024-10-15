#include<bits/stdc++.h>

using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        string s;
        cin >> s;
        string newstring;
        for(int i=0;i<s.size();i++){
            int check = 1;
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    check = 0;
                    s[j] = '0';
                }
            }
            if(check==0){
                s[i] = '0';
            }
        }
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')) cout << s[i];
        }
        cout << endl;
    }
}