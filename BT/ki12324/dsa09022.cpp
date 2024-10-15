#include <bits/stdc++.h>
using namespace std;

void dfs(int source,vector<vector<int>> sav,vector<bool>& isvisited){
    stack<int> s;
    s.push(source);
    while(!s.empty()){
        int temp=s.top();
        s.pop();
        if(!isvisited[temp]){
            cout << temp << " ";
            isvisited[temp]=true;
        }
        vector<int> newpush(sav[temp].rbegin(),sav[temp].rend());
        for(auto i:newpush){
            if(!isvisited[i]) s.push(i);
        }
    }
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int dinh,canh,source;cin>>dinh>>canh>>source;
        vector<vector<int>> sav(dinh+1);
        vector<bool> isvisited(dinh+1,false);
        for(int i=0;i<canh;i++){
            int a,b;cin>>a>>b;
            sav[a].push_back(b);
        }
        dfs(source,sav,isvisited);
        cout << endl;
    }
}