#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &g,int source,vector<bool> &isVisited){
    isVisited[source] = true;
    cout << source << " ";
    for (int u : g[source]){
        if (!isVisited[u]){
            dfs(g,u,isVisited);
        }
    }
}

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int v, e, source;
        cin >> v >> e >> source;
        vector<vector<int>> g(v + 1);
        vector<bool> isVisited(v + 1,false);
        int x,y;
        while (e--) {
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(g,source,isVisited);
        cout << endl;
    }   
}