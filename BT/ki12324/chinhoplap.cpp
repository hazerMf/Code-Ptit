#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int lim,len;cin>>lim>>len;
        queue<string> q;
        q.push("");
        while(!q.empty()){
            string s = q.front();q.pop();
            if(s.length()>len) break;
            else if(s.length()==len) cout << s << endl;
            else{
                for(int i=1;i<=lim;i++){
                    string temp = s + to_string(i);
                    q.push(temp);
                }
            }
        }
    }
}