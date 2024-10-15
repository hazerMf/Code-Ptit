#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int sz;cin>>sz;
        int list[sz];
        for(int i=0;i<sz;i++){
            cin>>list[i];
        }
        sort(list,list+sz);
        int cnt=0;
        for(int i=1;i<sz;i++){
            if(list[i]!=list[i-1]) cnt+=list[i]-list[i-1]-1;
        }
        cout << cnt << endl;
    }
}