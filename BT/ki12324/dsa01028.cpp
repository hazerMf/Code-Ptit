#include<bits/stdc++.h>
using namespace std;

bool check(string s,int size){
    int cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') cnt++;
    }
    if(cnt==size) return true;
    else return false;
}

int main(){
    int len,size;
    cin >> len >> size;
    int list[len];
    for(int i=0;i<len;i++){
        cin >> list[i];
    }
    vector<int> num;
    sort(list,list+len);
    for(int i=0;i<len;i++){
        num.push_back(list[i]);
    }
    vector<int>::iterator ip;
    ip = std::unique(num.begin(), num.begin() + len);
    num.resize(std::distance(num.begin(), ip));
    queue<string> q;
    q.push("");
    while(!q.empty()){
        string s=q.front();
        q.pop();
        if(s.length()>num.size()) break;
        if(s.length()==num.size() && check(s,size)){
            for(int i=0;i<s.size();i++){
                if(s[i]=='1'){
                    cout << num[i] << " ";
                }
            }
            cout << endl;
        }
        q.push(s+"1");
        q.push(s+"0");
    }
}