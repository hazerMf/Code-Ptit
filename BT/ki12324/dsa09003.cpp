#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int cor,side;
        cin >> cor >> side;
        vector<set<int>> list(cor+1);
        for(int i=0;i<side;i++){
            int a,b;
            cin >> a >> b;
            list[a].insert(b);
        }
        for(int i=1;i<=cor;i++){
            cout << i << ": ";
            for(auto j:list[i]) cout << j << " ";
            cout << endl;
        }
    }
}