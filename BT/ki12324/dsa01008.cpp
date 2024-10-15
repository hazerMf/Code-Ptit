#include<bits/stdc++.h>
using namespace std;

bool chk(string s,int lim){
    int dem=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            dem++;
        }
    }
    if(dem!=lim) return false;
    return true;
}

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int n,lim;
        cin >> n >> lim;
        queue<string> q;
        q.push("");
        while(!q.empty()){
            string s=q.front();
            q.pop();
            if(s.length()>n) break;
            if(s.length()==n&&chk(s,lim)){
                for(int i=0;i<s.size();i++){
                    cout << s[i];
                }
                cout << endl;
            }
            q.push(s+"0");
            q.push(s+"1");
        }
        cout << endl;
    }
}