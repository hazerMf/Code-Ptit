#include <bits/stdc++.h>
using namespace std;
int a[10000][10000] = {},n;

void BFS(int u){
    queue<int> q;
    q.push(u);
    bool used[n] = {false};
    used[u]=true;
    while(!q.empty()){
        int temp = q.front();
        cout << temp << " ";
        q.pop();
        for(int i=1;i<=n;i++){
            if(a[temp][i]==1&&!used[i]){
                q.push(i);
                used[i]=true;
            }
        }
    }
    cout << endl;
}

int main() {
    cin >> n; cin.ignore();
    for (int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    int u;cin>>u;
    BFS(u);
}