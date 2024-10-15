#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int sz;cin>>sz;
        long long list[sz];
        for(int i=0;i<sz;i++){
            cin>>list[i];
        }
        sort(list,list+sz);
        long long ans=list[1]-list[0];
        for(int i=2;i<sz;i++){
            ans = min(ans,list[i]-list[i-1]);
        }
        cout << ans << endl;
    }
}