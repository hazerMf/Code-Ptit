#include <bits/stdc++.h>
using namespace std;
int a[10000][10000] = {},n;

void DFS(int u){
    stack<int> s;
    s.push(u);
    bool used[n] = {false};
    used[u]=true;
    while(!s.empty()){
        int temp = s.top();
        cout << temp << " ";
        s.pop();
        for(int i=n;i>=1;i--){
            if(a[temp][i]==1&&!used[i]){
                s.push(i);
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
    DFS(u);
}