#include <bits/stdc++.h>
using namespace std;

int main(){
    int _runs;cin>>_runs;
    while(_runs--){
        int s;cin>>s;
        long long list[s+1],f[s+1]={};
        for(int i=1;i<=s;i++){
            cin>>list[i];
            if(i==1) f[i] = list[i];
            else f[i] = max(f[i-1],f[i-2]+list[i]);
        }
        cout << *max_element(f+1,f+1+s) << endl;
    }
}