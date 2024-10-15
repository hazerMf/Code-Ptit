#include <bits/stdc++.h>
using namespace std;

int main(){
    int runs;
    cin >> runs;
    while(runs--){
        int len,pos;
        cin >> len >> pos;
        int list[len];
        for(int i=0;i<len;i++){
            cin >> list[i];
        }
        sort(list,list+len);
        cout << list[pos-1] << endl;
    }
}