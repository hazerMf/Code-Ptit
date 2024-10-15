#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int sz,num;cin>>sz>>num;
        int list[sz];
        bool chk = false;
        int cnt;
        for(int i=0;i<sz;i++){
            cin>>list[i];
            if(list[i]==num){
                if(chk==false){
                    chk=true;
                    cnt=1;
                }else{
                    cnt++;
                }
            }
        }
        if(chk) cout << cnt << endl;
        else cout << -1 << endl;
    }
}