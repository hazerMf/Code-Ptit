#include<bits/stdc++.h>
using namespace std;

bool chk(string s,int lim){
    int ch=0,dem=0;
    for(char x: s){
        if(x=='1') dem++;
        else{
            if(dem==lim) ch++;
            dem=0;
        }
        if(dem>lim) return false;
    }
    if(dem==lim) ch++;
    return ch==1;
}

int main(){
    int n,lim;
    cin >> n >> lim;
    queue<string> q;
    queue<string> save;
    q.push("");
    while(!q.empty()){
        string s=q.front();
        q.pop();
        if(s.length()>n) break;
        if(s.length()==n&&chk(s,lim)){
            string f="";
            for(int i=0;i<s.length();i++){
                if(s[i]=='1') f+='A';
                else f+='B';
            }
            save.push(f);
        }
        q.push(s+"1");
        q.push(s+"0");
    }
    cout << save.size() << endl;
    while(!save.empty()){
        string f=save.front();
        save.pop();
        cout << f << endl;
    }
}