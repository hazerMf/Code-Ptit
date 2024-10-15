#include<bits/stdc++.h>
using namespace std;
char alp[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

bool chk(string s,int lim){
    int dem = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='1') dem++;
    }
    if(dem==lim) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int runs;
    cin >> runs;
    while(runs--){
        int len,cnt;
        cin >> len >> cnt;
        queue<string> q;
        q.push("");
        while(!q.empty()){
            string s= q.front();
            q.pop();
            if(s.length()>len) break;
            if(s.length()==len&&chk(s,cnt)){
                for(int i=0;i<s.length();i++){
                    if(s[i]=='1') cout << alp[i];
                }
                cout << endl;
            }
            q.push(s+"1");
            q.push(s+"0");
        }
    }
}