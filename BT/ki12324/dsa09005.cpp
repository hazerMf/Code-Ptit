#include <bits/stdc++.h>
using namespace std;

void bfs(int source,vector<set<int>> sav,vector<bool> isvisited){
    queue<int> q;
    q.push(source);
    while(!q.empty()){
        int temp=q.front();q.pop();
        if(!isvisited[temp]) cout << temp << " ";
        isvisited[temp]=true;
        for(auto i:sav[temp]){
            if(!isvisited[i]) q.push(i);
        }
    }
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int dinh,canh,source;cin>>dinh>>canh>>source;
        vector<set<int>> sav(dinh+1);
        vector<bool> isvisited(dinh+1,false);
        for(int i=0;i<canh;i++){
            int a,b;cin>>a>>b;
            sav[a].insert(b);
            sav[b].insert(a);
        }
        bfs(source,sav,isvisited);
        cout << endl;
    }
}