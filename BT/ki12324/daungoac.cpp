#include <bits/stdc++.h>
using namespace std;

bool chk(string s){
    int c = 0;
    for(auto i:s){
        if(i=='(') c++;
    }
    if(c*2!=s.length()) return false;
    stack<char> st;
    for(auto i:s){
        if(i=='(') st.push(i);
        else{
            if(st.top()=='(') st.pop();
            else return false;
        }
    }
    return st.empty();
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int len;cin>>len;
        queue<string> q;
        q.push("");
        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s.length()>len) break;
            if(s.length()==len){
                if(chk(s)){
                    cout << s << endl;
                }
            }
            q.push(s+'(');
            q.push(s+')');
        }
    }
}