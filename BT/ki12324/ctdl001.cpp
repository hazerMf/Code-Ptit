#include<bits/stdc++.h>
using namespace std;

int tn(string s){
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-i-1]) return 0;
    }
    return 1;
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
        if(s.length()==n && tn(s)){
            for(int i=0;i<s.size();i++){
                cout << s[i] << " ";
            }
            cout << endl;
        }
        q.push(s+"0");
        q.push(s+"1");
    }
}