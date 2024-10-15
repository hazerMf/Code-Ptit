#include<bits/stdc++.h>
using namespace std;

bool chk(string s,int size){
    int dem = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') dem++;
    }
    if(dem==size) return true;
    else return false;
}

int main(){
    int size;
    cin >> size;
    queue<string> s;
    s.push("");
    int dem=0;
    while(!s.empty()){
        string temp=s.front();
        s.pop();
        if(temp.length()>size*2) break;
        if(temp.length()==size*2 && chk(temp,size)){
            dem++;
        }
        s.push(temp+"0");
        s.push(temp+"1");
    }
    cout << dem;
}