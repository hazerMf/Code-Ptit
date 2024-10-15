#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;cin>>runs;
    while(runs--){
        int sz,num;cin>>sz>>num;
        int list[sz];
        for(int i=0;i<sz;i++){
            cin>>list[i];
        }
        sort(list,list+sz);
        for(int i=1;i<=num;i++){
            cout << list[sz-i] << " ";
        }
        cout << endl;
    }
}