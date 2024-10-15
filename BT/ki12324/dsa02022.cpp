#include<bits/stdc++.h>
using namespace std;

bool chk(string s){
    int numck = 0;
    if(s[4]=='0') return false;
    if(s[0]=='0'&&s[1]=='0') return false;
    if(s[2]=='0'&&s[3]=='0') return false;
    if(s[2]=='2') return false;
    return true;
}

int main(){
    int t=8;
    queue<string> q;
    q.push("");
    while(!q.empty()){
        string s=q.front();
        q.pop();
        if(s.length()>t) break;
        if(s.length()==t&&chk(s)){
            for(int i=0;i<s.size();i++){
                cout << s[i];
                if(i==1||i==3) cout << "/";
        }
        cout << endl;
        }
        q.push(s+"0");
        q.push(s+"2");
    }
    cout << endl;
}