#include<bits/stdc++.h>
using namespace std;

bool chk(string s){
    if(s[0]=='A') return false;
    int pos = 1;
    for(int i=1;i<s.length();i++){
        if(pos==1){
            if(s[i]=='A'){
                pos = 0;
            }else{
                return false;
            }
        }else{
            if(s[i]=='H'){
                pos=1;
            }else{
                continue;
            }
        }
    }
    if(pos==1) return false;
    return true;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int n;
        cin >> n;
        queue<string> q;
        q.push("");
        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s.length()>n) break;
            if(s.length()==n&&chk(s)){
                cout << s << endl;
            }
            q.push(s+"A");
            q.push(s+"H");
        }
    }
}