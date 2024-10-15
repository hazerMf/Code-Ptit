#include<bits/stdc++.h>
using namespace std;
int dem = 0;


bool check(string s,int a[],int tar){
    int sum = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            sum += a[i];
        }else{
            continue;
        }
    }
    if(tar == sum) return true;
    else return false;
}

int main(){
    int len,tar;
    cin >> len >> tar;
    int list[len];
    for(int i=0;i<len;i++){
        cin >> list[i];
    }
    queue<string> q;
    q.push("");
    while(!q.empty()){
        string s=q.front();
        q.pop();
        if(s.length()>len) break;
        if(s.length()==len&&check(s,list,tar)){
            for(int i=0;i<s.size();i++){
                if(s[i]=='1'){
                    cout << list[i] << " ";
                }
            }
            cout << endl;
            dem++;
        }
        q.push(s+"0");
        q.push(s+"1");
    }
    cout << dem;
}