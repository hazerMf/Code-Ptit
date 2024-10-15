#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int len;cin>>len;
        vector<int> list(len+1),f(len+1);
        f[0]=0;
        for(int i=1;i<=len;i++){
            cin >> list[i];
            if(i==1) f[i] = list[i];
            else f[i]=max(f[i-1],f[i-2]+list[i]);
        }
        cout << f[len] << endl;
    }
}