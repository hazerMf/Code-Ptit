#include<bits/stdc++.h>
using namespace std;

bool chk(string s){
    if(s[0]=='6') return false;
    for(int i=0;i<s.length();i++){
        if(s[i]=='8'){
            if(s[i+1]=='8') return false;
        }else if(s[i]=='6'){
            int cnt=1;
            for(int j=i+1;j<s.length();j++){
                if(s[j]=='8') break;
                else{
                    cnt++;
                }
                if(cnt>3) return false;
            }
        }
    }
    if(s[s.length()-1]=='8') return false;
    return true;
}

int main(){
    int n;
    cin >> n;
    queue<string> q;
    q.push("");
    while(!q.empty()){
        string s=q.front();
        q.pop();
        if(s.length()>n) break;
        if(s.length()==n&&chk(s)){
            for(int i=0;i<s.length();i++){
                cout << s[i];
            }
            cout << endl;
        }
        q.push(s+"6");
        q.push(s+"8");
    }
}
