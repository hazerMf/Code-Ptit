#include<bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int sz;
        cin >> sz;
        int list[sz];
        for(int i=0;i<sz;i++){
            cin >> list[i];
        }
        sort(list,list+sz);
        for(int i=0;i<sz;i++){
            cout << list[i] << " ";
        }
        cout << endl;
    }
}