#include <bits/stdc++.h>
using namespace std;

bool chk(string s,int de){
    int dem = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') dem++;
    }
    if(dem==de) return true;
    return false;
}

int main(){
    int sz,de;
    cin >> sz >> de;
    vector<string> list;
    for(int i=0;i<sz;i++){
        string s;
        cin >> s;
        if(find(list.begin(),list.end(),s)==list.end()) list.push_back(s);
    }
    sort(list.begin(),list.end());
    int len = list.size();
    queue<string> q;
    q.push("");
    while(!q.empty()){
        string s=q.front();
        q.pop();
        if(s.length()>len) break;
        if(s.length()==len&&chk(s,de)){
            for(int i=0;i<s.length();i++){
                if(s[i]=='1') cout << list[i] << " ";
            }
            cout << endl;
        }
        q.push(s+"1");
        q.push(s+"0");
    }
}