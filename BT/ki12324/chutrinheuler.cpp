#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int dinh,canh;cin>>dinh>>canh;
        vector<vector<int>> v(dinh+1);
        for(int i=0;i<canh;i++){
            int a,b;cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        int dem=0;
        for(int i=1;i<=dinh;i++){
            dem+=(v[i].size()%2==1);
        }
        if(dem==0) cout << 2;
        else if(dem==2) cout << 1;
        else cout << 0;
        cout << endl;
    }
}